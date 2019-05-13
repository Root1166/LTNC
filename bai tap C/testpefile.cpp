#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <Windows.h>

using namespace std;

int main()
{
    DWORD FileSize, PeHeaderAddress, Signature, exports, Characteristics_export;
    FILE *fp = fopen("E:\\PE.exe", "r");


    IMAGE_DOS_HEADER DosHeader;
    PIMAGE_DOS_HEADER dosHeader;
    PIMAGE_NT_HEADERS PeHeader;
    IMAGE_FILE_HEADER FileHeader ;
    IMAGE_OPTIONAL_HEADER OpHeader ;
    IMAGE_SECTION_HEADER SectionHeader ;
    IMAGE_EXPORT_DIRECTORY Export;



    fseek(fp, 0, SEEK_END);         //  đưa con trỏ về cuối tập tin
    FileSize = ftell(fp);           //  ftell(fp) : cho biết vị trí hiện tại của con trỏ chỉ vị (byte thứ mấy trên tập fp)

    if (FileSize < sizeof(IMAGE_DOS_HEADER)+sizeof(IMAGE_NT_HEADERS))
        printf("NOT PE file ");
    else
        printf("\t\t-------------------------Reading PE FILE----------------------\n\n");
        printf("\n---------------------------Reading DOS header----------------------\n\n");
        printf("Size of DosHeder:\t\t %d \n",sizeof (DosHeader));         //sizeofDosHeader
        fseek(fp, 0, SEEK_SET);         // đưa con trỏ về đầu tập tin
        fread(&DosHeader, sizeof (DosHeader), 1, fp);
        if (DosHeader.e_magic != 0x5a4d )
            printf("NOT PE file");
        else{
            printf("Magic number:\t\t\t MZ(%#x)", DosHeader.e_magic);    // e_magic

            printf("\nE_cblp:\t\t\t\t %#x", DosHeader.e_cblp);

            printf("\nE_cp:\t\t\t\t %#x  ",DosHeader.e_cp);

            printf("\nE_crlc:\t\t\t\t %#x",DosHeader.e_crlc);

            printf("\nE_cparhdr:\t\t\t %#x",DosHeader.e_cparhdr);

            printf("\nE_minalloc:\t\t\t %#x",DosHeader.e_minalloc);

            printf("\nE_maxalloc:\t\t\t %#x ",DosHeader.e_maxalloc);

            printf("\nE_ss:\t\t\t\t %#x",DosHeader.e_ss);

            printf("\nE_sp:\t\t\t\t %#x",DosHeader.e_sp);

            printf("\nE_csum:\t\t\t\t %#x",DosHeader.e_csum);

            printf("\nE_IP:\t\t\t\t %#x",DosHeader.e_ip);

            printf("\nE_CS:\t\t\t\t %#x",DosHeader.e_cs);

            printf("\nAdress of PE header(e_lfanew):\t %#xh \n", DosHeader.e_lfanew);     // e_lfanew
        }


        PeHeaderAddress = DosHeader.e_lfanew;
        if (FileSize <= PeHeaderAddress + sizeof(IMAGE_NT_HEADERS))
            printf("NOT PE file");
        else
            printf("\n\n----------------------------Reading PE Header------------------------------\n");
            printf("\n\n----------------------------PE File signature------------------------------\n");
            fseek(fp, PeHeaderAddress, SEEK_SET);           //  đưa con trỏ về đầu Pe Header Adress
            fread(&Signature, sizeof(DWORD), 1, fp);        //đọc thông tin signature
            printf("Signature:\t\t %#x \n", Signature);     //Signature

            fread(&FileHeader, sizeof FileHeader, 1, fp);       //đọc FileHeader
            printf("number of section:\t %d \n", FileHeader.NumberOfSections);          //NumberOfSection
            printf("Size of optional Header: %d \n", FileHeader.SizeOfOptionalHeader);  //SizeOfOptionalHeader
            printf("Characteristics:\t\t %x", FileHeader.Characteristics);

            printf("\n\n----------------------------PE Optional Header------------------------------\n");
            fread(&OpHeader,1, sizeof(OpHeader), fp);            // đọc optional header
            printf("Address of Entry Point:\t\t %#x\n", OpHeader.AddressOfEntryPoint);
            printf("ImageBase:\t\t\t %#x \n", OpHeader.ImageBase);
            printf("BaseofCode:\t\t\t %#x \n", OpHeader.BaseOfCode);
            printf("FileAlignment:\t\t\t %#x \n", OpHeader.FileAlignment);
            printf("SizeOfImage:\t\t\t %#x \n", OpHeader.SizeOfImage);
            printf("CheckSum:\t\t\t %#x \n", OpHeader.CheckSum);
            printf("-------------------------------------------------\n\n");

            fread(&SectionHeader, PeHeaderAddress+ sizeof (IMAGE_NT_HEADERS) ,sizeof (SectionHeader), fp);    //đọc sectionHeader
            int secCount = 1;       //secCount= section Count
            while (secCount <= FileHeader.NumberOfSections)      // lặp lại cho đến khi số section <= NumberofSection
            {
                printf("\n\n----------------------------section header (%d or %d)------------------------------\n\n", secCount, FileHeader.NumberOfSections);
                printf("Section Header name \t\t:%s\n", SectionHeader.Name);
                printf("Virtual Size  \t\t\t:%#x\n", SectionHeader.Misc.VirtualSize);
                printf("Virtual Address \t\t:%#x\n", SectionHeader.VirtualAddress);
                printf("Size of raw data  \t\t:%#x\n", SectionHeader.SizeOfRawData);
                printf("Pointer to Raw Data \t\t:%#x\n\n", SectionHeader.PointerToRawData);
                fseek(fp, PeHeaderAddress + sizeof(IMAGE_NT_HEADERS)+secCount*sizeof(IMAGE_SECTION_HEADER), SEEK_SET);
                fread(&SectionHeader, sizeof(SectionHeader), 1, fp);
                secCount++;
            }

            printf("\n\n----------------------------Reading ExPort------------------------------\n\n");
            exports = SectionHeader.Characteristics;
            fseek(fp, exports, SEEK_SET);                           //đặt con trỏ vào đầu IMAGE_EXPORT
            fread(&Characteristics_export, sizeof(DWORD), 1 ,fp);
            printf("characteristics \t: %#x \n", Characteristics_export);

            fread(&Export, sizeof (Export), 1, fp);                   //đọc IMAGE_EXPORT
            printf("nName \t\t\t: %x \n", Export.Name);
            printf("nBase \t\t\t: %x \n", Export.Base);
            printf("Number of Function \t: %d \n", Export.NumberOfFunctions);
            printf("Number of Name \t\t: %d \n", Export.NumberOfNames);
            printf("Address of function \t: %x \n", Export.AddressOfFunctions);
            printf("Adress Of Name \t\t: %x \n", Export.AddressOfNames);
            printf("Address of name ordinals: %x \n", Export.AddressOfNameOrdinals);




        fclose(fp);
        _getch();
}
