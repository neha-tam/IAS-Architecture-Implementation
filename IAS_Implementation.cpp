#include<bits/stdc++.h>
#include<iostream>
#include<iomanip>
#include<string>  //string header file
using namespace std;
int decode();
typedef long long int l;

int con(string str)  //function to get integer values from binary number strings
{
	int num;
	//cout<<"In con"<<endl;
	string str0,str1,str2,str3,str4,str5,str6,str7,str8,str9,str10,str11,str12,str13,str14,str15,str16,str33,stra0,stra1,stra2,stra3,stra4,stra5,stra6,stra7,stra8,stra9,stra10,stra11,stra12,stra13,stra14,stra15,stra16,stra33;
	str0="00000000"; stra0="000000000000";
	str1="00000001"; stra1="000000000001";
	str2="00000010"; stra2="000000000010";
	str3="00000011"; stra3="000000000011";
	str4="00000100"; stra4="000000000100";
	str5="00000101"; stra5="000000000101";
	str6="00000110"; stra6="000000000110";
	str7="00000111"; stra7="000000000111";
	str8="00001000"; stra8="000000001000";
	str9="00001001"; stra9="000000001001";
	str10="00001010"; stra10="000000001010";
	str11="00001011"; stra11="000000001011";
	str12="00001100"; stra12="000000001100";
	str13="00001101"; stra13="000000001101";
	str14="00001110"; stra14="000000001110";
	str15="00001111"; stra15="000000001111";
	str16="00010000"; stra16="000000010000";
	str33="00100001"; stra33="000000100001";
	if(!(strcmp(str.c_str(),str0.c_str())) || !(strcmp(str.c_str(),stra0.c_str())))  //.c_str() converts "00" and input string to char maybe 
		num=0;
	else 
	{
		if(!(strcmp(str.c_str(),str1.c_str())) || !(strcmp(str.c_str(),stra1.c_str())))
		{
		
		num=1;
		}
	else
        {
                if(!(strcmp(str.c_str(),str2.c_str())) || !(strcmp(str.c_str(),stra2.c_str())))
                num=2;
	else
        {
                if(!(strcmp(str.c_str(),str3.c_str())) || !(strcmp(str.c_str(),stra3.c_str())))
                num=3;
	else
        {
                if(!(strcmp(str.c_str(),str4.c_str())) || !(strcmp(str.c_str(),stra4.c_str())))
                num=4;	
	else
        {
                if(!(strcmp(str.c_str(),str5.c_str())) || !(strcmp(str.c_str(),stra5.c_str())))
                num=5;
	else
        {
                if(!(strcmp(str.c_str(),str6.c_str())) || !(strcmp(str.c_str(),stra6.c_str())))
                num=6;
	
	
	else 
	{
		if(!(strcmp(str.c_str(),str7.c_str())) || !(strcmp(str.c_str(),stra7.c_str())))
		num=7;
	else
        {
                if(!(strcmp(str.c_str(),str8.c_str())) || !(strcmp(str.c_str(),stra8.c_str())))
                num=8;
	
	else 
	{
		if(!(strcmp(str.c_str(),str9.c_str())) || !(strcmp(str.c_str(),stra9.c_str())))	
		num=9;
	else
        {
                if(!(strcmp(str.c_str(),str10.c_str())) || !(strcmp(str.c_str(),stra10.c_str())))
                num=10;	
	else
        {
                if(!(strcmp(str.c_str(),str11.c_str())) || !(strcmp(str.c_str(),stra11.c_str())))
                num=11;
	
	else 
	{
		if(!(strcmp(str.c_str(),str12.c_str())) || !(strcmp(str.c_str(),stra12.c_str())))
		num=12;
	else
        {
                if(!(strcmp(str.c_str(),str13.c_str())) || !(strcmp(str.c_str(),stra13.c_str())))
                num=13;
	
	else 
	{
		if(!(strcmp(str.c_str(),str14.c_str())) || !(strcmp(str.c_str(),stra14.c_str())))
		num=14;
	else
        {
                if(!(strcmp(str.c_str(),str15.c_str())) || !(strcmp(str.c_str(),stra15.c_str())))
                num=15;
	
	else
	{
		if(!(strcmp(str.c_str(),str16.c_str())) || !(strcmp(str.c_str(),stra16.c_str())))
		num=16;
	 else
        {
                if(!(strcmp(str.c_str(),str33.c_str())) || !(strcmp(str.c_str(),stra33.c_str())))
                num=33;	
		else
		{
			cout<<"wrong number"<<endl;
			return 0;
		}
	}
	}
	}
	}
	}
	}
	}
	}
	}
	}
	}
	}
	}}}}}
	return(num);

}	


string noc(int a)  //function to get binary number strings from integer values
{
	string s1;
	if(a==0)
		s1="000000000000";
	else
	{
		if(a==1)
			s1="000000000001";
	else
        {
                if(a==2)
                        s1="000000000010";
	else
        {
                if(a==3)
                        s1="000000000011";
	else
        {
                if(a==4)
                        s1="000000000100";
	else
        {
                if(a==5)
                        s1="000000000101";
	else
        {
                if(a==6)
                        s1="000000000110";
	
	
	else
        {
                if(a==7)
                        s1="000000000111";
	else
        {
                if(a==8)
                        s1="000000001000";
	else
        {
                if(a==9)
                        s1="000000001001";
	else
        {
                if(a==10)
                        s1="000000001010";	
	else
        {
                if(a==11)
                        s1="000000001011";
	
	else
        {
                if(a==12)
                        s1="000000001100";
	else
        {
                if(a==13)
                        s1="000000001101";
	
	else
        {
                if(a==14)
                        s1="000000001110";
	else
        {
                if(a==15)
                        s1="000000001111";
	
	else
        {
                if(a==16)
                        s1="000000010000";
		else
			cout<<"wrong number"<<endl;
	}}}}}}}}}}}}}}}}
	return(s1);
	
}	











//array of instructions to be executed
string instr[50]={"0000000100000000111000000110000000000001", //LOAD, SUB  
                                   "00001111000000001001",    //JUMP+ M(0:19)
               "0000000100000000111000000101000000000001",    //LOAD, ADD
	       "0000010100000000000100000101000000000001",    //ADD, ADD
	       "0000010100000000001000000101000000000010",    //ADD, ADD
	       "0000010100000000001100000101000000000011",    //ADD, ADD
	       "0000010100000000010000000101000000000100",    //ADD, ADD
	       "00100001000000001111",                        //STORE   
	       "00000000000000000000",                        //HALT
	       "0000010100000000010100000101000000000101",    //ADD, ADD
	       "0000010100000000011000000101000000000110",    //ADD, ADD
	       "0000010100000000011100000101000000000111",    //ADD, ADD
	       "0000010100000000100000000101000000001000",    //ADD, ADD
	       "0000010100000000100100000101000000001001",    //ADD, ADD
	       "00100001000000001111",                        //STORE
	       "00000000000000000000"                         //HALT
};

string pc,mar,mbr,ir,ibr;
// array of data that will be used
int data[50]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,50};
int ac,mq,pcint=0;  //pcint is the integer form of pc, the program counter
bool inibr=false;


//fetch function
void fetch()
{
	pc=noc(pcint);
	mar.assign(pc);  
	//pcint=con(mar);
	
	mbr.assign(instr[con(mar)]);  //putting the instruction in MBR-memory buffer register
	ir.assign(mbr.substr(0,8));   //putting the op code in IR-the instruction register
	mar.assign(mbr.substr(8,12)); //putting the address in MAR-memory address register
	if(mbr.size()==40)  //checking if there is a right instruction
	{
		ibr=mbr.substr(20,20);  //putting the right instruction in IBR-instruction buffer register
		inibr=true;
		decode();    //calling the decode function
	}

	else
	{
		inibr=false;  	
	        decode();  //calling the decode function
	}
}


//decode function
int decode()
{
	switch (con(ir))
	{
		case 0:  //HALT
			cout<<"halt"<<endl;

			exit(0);
		case 1:  //LOAD M(mar)
			cout<<"Load"<<endl;
		        ac =data[con(mar)];
			cout<<"AC = "<<ac<<endl;
			break;
		case 5:  //ADD
			cout<<"add"<<endl;
			ac = ac + data[con(mar)];
			cout<<"AC= "<<ac<<endl;
			break;
		case 6:  //SUB M(mar)
			cout<<"sub"<<endl;
			ac = ac - data[con(mar)];
			cout<<"AC= "<<ac<<endl;
			break;
		case 15:  //JUMP+ M(0:19)
			cout<<"jump"<<endl;
			if(ac>=0)
			{
			pc.assign(mar);
			pcint=con(pc);
			mbr.assign(instr[con(mar)]);  //putting the next instruction in mbr
			ir.assign(mbr.substr(0,8));
			mar.assign(mbr.substr(8,12));
			
			if(strlen(mbr.c_str())>20)
			{
			ibr.assign(mbr.substr(20,20)); //putting the right instruction in ibr
			inibr=true;
			}
			decode();  //calling decode
			}

			break;

		case 33:  //STORE M(MAR)
			cout<<"store"<<endl;
			data[con(mar)] = ac;  
		        break;	
		default: 
			cout<<"Invalid input"<<endl;
			break;	
	}
	if(inibr==true)
	{
		
		mar.assign(ibr.substr(8,12));
		ir.assign(ibr.substr(0,8));
		inibr=false;
		decode();
	}
	else
	{
		pcint++;                                    //incrementing the program counter
		fetch();    //fetching the next instruction
	}


	return 0;
}

//main function
int main()
{
	pcint=0;  //initializing the program counter to 0
	pc="000000000000";
	
	fetch();  //calling the fetch function 
	return 0;
}

	

	








	
