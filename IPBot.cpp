#include <iostream> 
#include <cstring> 
#include <cstdlib>
#include <windows.h>
#include <limits>
 
using namespace std; 

void error(string& name){
	cout << "\nBot: Unfortunately, IPBot can't understand your answer " + name + ". :( Please retry and follow the instructions. Thank you!" << endl;
}

void goodbye(string& name){

	cout << "Bot: Goodbye, " + name + "! I hope you learned a lot from IPBot. \n"; 
	cout << "\t\t\t        _____________________\n";
	cout << "\t\t\t       | ___________________ |\n";
	cout << "\t\t\t       ||   _           _   ||\n";
	cout << "\t\t\t       ||  | |         | |  ||\n"; 
	cout << "\t\t\t       ||      _______      ||\n";  
	cout << "\t\t\t       ||     |_|_|_|_|     ||\n";
	cout << "\t\t\t       ||___________________||\n";
	cout << "\t\t\t       |_____________________|\n";
	cout << "\t\t\t              _|     |_\n";
	cout << "\t\t\t             |_________|\n";
	cout << "____________________________________________________________________________________\n";
}

void error_check(int answer){
	if (isdigit(answer)==false){
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
}

void defineIP_1(){
	cout << "\nBot: IP Address is the numerical label assigned to each device (e.g., computer, printer) participating in a ";
	cout << "computer network that uses the Internet Protocol for communication. An IP address serves ";
	cout << "two principal functions: host or network interface identification and location addressing. ";
	cout << "Its role has been characterized as follows: A name indicates what we seek. An address ";
	cout << "indicates where it is. A route indicates how to get there. " ;
	system ("pause");
}

void defineIP_2(){
	cout << "\nBot: The General IP Addressing Architecture that we currently have in place can be explained in the following replies. ";
	system ("pause");
	cout << "\nBot: Firstly, the 32 bits are grouped into four octets having 8 bits each. Next, the IP address is ";
	cout << "represented in a doted decimal notation, meaning that the four octets are separated by a ";	
	cout << "decimal between them, which is read as a dot while reading the address. Thirdly, the octets "; 
	cout << "are converted into a decimal number for easier identification, and the IP address takes the ";
	cout << "form A.B.C.D. ";
	system ("pause");				
					
	cout << "\nBot: An IP address is a logical address for the network layer of the host connected to the ";
	cout << "network. Note that each interface of the host has an IP address, and if a host has two ";
	cout << "interfaces connected to two different networks, it will have two different IP addresses--one ";
	cout << "for each interface. The host may also have an address for a logical interface, which is ";
	cout << "different from a physical interface. ";
	system ("pause");
	
	cout << "\nBot: An IP address is divided into two parts:"<<endl;
	cout << "> Network Part - specifies the unique number that is assigned to your network. The ";
	cout << "network part also identifies the class of network that is assigned. It occupies two bytes of the IPv4 address." << endl;
	cout << "> Host Part - the part of the IPv4 address that you assign to each host. The host part ";
	cout << "uniquely identifies this machine on your network. Note that for each host on your ";
	cout << "network, the network part of the address is the same, but the host part must be different." << endl;	
	system ("pause");				
}

void defineIP(string& name){
	int answer;
	
	DEFINE:
		cout << endl << "Bot: What do you want to know?" << endl;
		cout << "(1) IP Address\n(2) General IP Addressing Architecture\n(3) Back" <<endl <<endl;
		cout << "Answer: ";
		cin >> answer;
	
		error_check(answer);		
			switch (answer)
			{
				case 1:
					defineIP_1();
					goto DEFINE;
					break;
				case 2:
					defineIP_2();
					goto DEFINE;
					break;		
				case 3:
					break;
				default:
					error(name);
					goto DEFINE;
					break;	
			}
}


void classA(){
	cout << "\nBot: IP address belonging to class A are assigned to the networks that contain a large number of hosts. ";
	system("pause");
	cout << "\nBot: The higher order bit of the first octet in class A is always set to 0. The remaining 7 bits in ";
	cout << "first octet are used to determine network ID. The 24 bits of host ID are used to determine the host in any network. ";
	system("pause");
	cout << "\nBot: The default subnet mask for class A is 255.x.x.x. ";
	system("pause");
	cout << "\nBot: Class A has a total of 126 network address and 16,777,214 host address. ";
	system("pause");
	cout << "\nBot: The IP Address Range for class A is 1.x.x.x - 126.x.x.x. ";
	system("pause");
}

void classB(){
	cout << "\nBot: IP address belonging to class B are assigned to the networks that ranges from medium-sized to large-sized networks. ";
	system("pause");
	cout << "\nBot: The higher order bits of the first octet of IP addresses of class B are always set to 10. The ";
	cout << "remaining 14 bits are used to determine network ID. The 16 bits of host ID is used to determine the host in any network. ";
	system("pause");
	cout <<"\nBot: The default subnet mask for class B is 255.255.x.x. ";
	system("pause");
	cout << "\nBot: Class B has a total of 16384 network address and 65534 host address. ";
	system("pause");
	cout << "\nBot: The IP Address Range for class B is 128.0.x.x - 191.255.x.x. ";
	system("pause");
}

void classC(){
	cout << "\nBot: IP address belonging to class C are assigned to small-sized networks. ";
	system("pause");
	cout << "\nBot: The higher order bits of the first octet of IP addresses of class C are always set to 110. The ";
	cout << "remaining 21 bits are used to determine network ID. The 8 bits of host ID is used to determine the host in any network. ";
	system("pause");
	cout << "\nBot: The default subnet mask of class C is 255.255.255.x. ";
	system("pause");
	cout << "\nBot: Class C has a total of 2097152 network address and 254 host address. ";
	system("pause");
	cout << "\nBot: The IP Address Range for class C is 192.0.0.x - 223.255.255.x. ";
	system("pause");
}

void classD(){
	cout  << "\nBot: IP address belonging to class D are reserved for multi-casting. ";
	system("pause");
	cout << "\nBot: The higher order bits of the first octet of IP addresses belonging to class D are always set to 1110. ";
	cout << "The remaining bits are for the address that interested hosts recognize. ";
	system ("pause");
	cout << "\nBot: There is no default subnet mask for class D. ";
	system ("pause");
	cout << "\nBot: The IP Address Range for class D is 224.0.0.0 - 239.255.255.255. ";
	system ("pause");
}

void classE(){
	cout << "\nBot: IP addresses belonging to class E are reserved for experimental and research purposes. ";
	system ("pause");
	cout << "\nBot: The higher order bits of first octet of class E are always set to 1111. ";
	system ("pause");
	cout << "\nBot: There is no default subnet mask for class E. ";
	system ("pause");
	cout << "\nBot: The IP Address Range for class E is 240.0.0.0 - 255.255.255.254. ";
	system ("pause");
}

void formsIP(string &name){
	int answer;
	
	FORMSOFIP:
		cout << endl << "Bot: 32-bit IP address (IPv4) is divided into five sub-classes. Please enter the number corresponding to the class of your choice!";
		cout << endl << "(1) Class A\n(2) Class B\n(3) Class C\n(4) Class D\n(5) Class E\n(6) Back" << endl <<endl;
		cout << name + ": "; cin >> answer; 
	
		error_check(answer);
			switch (answer){
			case 1:
			    classA();
				goto FORMSOFIP;
				break;
			case 2:
				classB();
				goto FORMSOFIP;
				break;
			case 3:
				classC();
				goto FORMSOFIP;
				break;
			case 4:
				classD();
				goto FORMSOFIP;
				break;
			case 5:
				classE();
				goto FORMSOFIP;
				break;
			case 6:
				break;
			default:
				error(name);
				goto FORMSOFIP;
		}
}

void IPsub(){
	
	cout <<"\nBot: The following are the concepts you should remember when it comes to subnetting. ";
	system ("pause");
	
	cout << "\nBot: First, subnetting is a technique used to allow a single IP network address to span multiple ";
	cout << "physical networks. It is done by using some of the bits of the host-id part of the IP address ";
	cout << "as a physical network identifier. ";
	system ("pause");
	
	cout << "\nBot: Second, the subnet mask is used to determine the bits of the network identifier. Take note that all ";
	cout << "hosts on the same network should have the same subnet mask. ";
	system ("pause");
	
	cout << "\nBot: Third, subnetting allows you to create multiple logical networks that exist within a single class ";
	cout << "A, B, or C network. If you do not subnet, you are only able to use one network from your ";
	cout << "Class A, B, or C network, which is unrealistic. ";
	system ("pause");
	
	cout << "\nBot: Fourth, each data link on a network must have a unique network ID, with every node on that link ";
	cout << "being a member of the same network. If you break a major network (Class A, B, or C) into ";
	cout << "smaller subnetworks, it allows you to create a network of interconnecting subnetworks. ";
	cout << "Each data link on this network would then have a unique network/subnetwork ID. Any ";
	cout << "device, or gateway, that connects n networks/subnetworks has n distinct IP addresses, one ";
	cout << "for each network / subnetwork that it interconnects. ";
	system ("pause");
	
	cout << "\nBot: Lastly, in order to subnet a network, extend the natural mask with some of the bits from the host ";
	cout << "ID portion of the address in order to create a subnetwork ID. ";
	system ("pause");
}

void discussionmenu(string& name)
{
	int answer;
	
	DISCUSS:
	cout << "\nBot: What would you like to learn about?" << endl;
	cout << "(1) Definition of IP Address and its Architecture\n(2) Forms of IP Address\n(3) Concept of IP Subnetting\n(4) Back\n" << endl;
	cout << name + ": "; cin >> answer;	
	
	error_check(answer);
	switch (answer)
	{
		case 1:
		    defineIP(name);
			goto DISCUSS;
			break;
		case 2:
			formsIP(name);
			goto DISCUSS;
			break;
		case 3:
			IPsub();
			goto DISCUSS;
			break;
		case 4:
			break;
		default:
			error(name);
			goto DISCUSS;
	}
}


// address identifier and subnet calculator -------------------------

void IPerror(string& name){
	cout << "\nBot: " + name + ", please input digits that are within the displayed range only.";
}

void fyi(){
	cout << endl << endl << "Bot: I'm going to add on to this in the following replies. ";
	system("pause");
}

void IPprofile(int& o1, int& o2, int& o3, int& o4){
	
	cout << "\nBot: According to IPBot's analysis, here are the details about the IP address you have entered:" << endl;
	
	if (o1 >=1 && o1 <= 126)
		{
			cout << "- Class: A" <<endl;
			cout << "- Network ID: " << o1 <<endl;
			cout << "- Host ID: " << o2 << "." << o3 << "." << o4 <<endl;
			cout << "- Default Subnet Mask: 255.x.x.x." << endl;
			cout << "- Wildcard Mask: x.255.255.255";
			
			fyi();
			classA(); 
		}
	else if (o1 >= 127 && o1 <= 191)
		{
			cout << "- Class: B" <<endl;
			cout << "- Network ID: " << o1 << "." << o2 <<endl;
			cout << "- Host ID: " << o3 << "." << o4 <<endl;
			cout << "- Default Subnet Mask: 255.255.x.x." << endl;
			cout << "- Wildcard Mask: x.x.255.255";
			
			fyi();
			classB(); 
		}
	else if (o1 >= 192 && o1 <= 223)
		{
			cout << "- Class: C" <<endl;
			cout << "- Network ID: " << o1 << "." << o2 << "." << o3 <<endl;
			cout << "- Host ID: " << o4 <<endl;
			cout << "- Default Subnet Mask: 255.255.255.x." << endl;
			cout << "- Wildcard Mask: x.x.x.255";
			
			fyi();
			classC(); 
		}
	else if (o1 >= 224 && o1 <= 239)
		{
			cout << "- Class: D" <<endl;
			cout << "- In this class, the IP address is not divided into Network ID and Host ID " <<endl;
			cout << "- It doesn't possess any subnet mask and wildcard mask. " << endl;
			
			fyi();
			classD(); 
		}
	else 
		{
			cout << "- Class: E" <<endl;
			cout << "- In this class, the IP address is not divided into Network ID and Host ID " <<endl;
			cout << "- It doesn't possess any subnet mask and wildcard mask. " << endl;
			
			fyi();
			classE(); 
		}
		
}

void inputIP(string &name, int& oct1, int& oct2, int& oct3, int& oct4){
	
	cout << "\nBot: Kindly input an IPv4 address in dotted-decimal notation!";
	
	FIRSTOCTET:
	cout << "\n\nFirst Octet (1-255): ";
	cin >> oct1;
	error_check(oct1);
	if (oct1 <= 0 || oct1 > 255)
	{
		IPerror(name);
		goto FIRSTOCTET;
	}
	cout << "IP Address: " << oct1 << " . x . x . x";
	
	SECONDOCTET:
	cout << "\n\nSecond Octet (0-255): ";
	cin >> oct2;
	while (cin.fail())
	{
		error_check(oct2);
		IPerror(name);
		goto SECONDOCTET;
	}
	if (oct2 < 0 || oct2 > 255)
	{
		IPerror(name);
		goto SECONDOCTET;
	}
	cout << "IP Address: " <<oct1 << " . " << oct2  << " . x . x";
	
	THIRDOCTET:
	cout << "\n\nThird Octet (0-255): ";
	cin >> oct3;
	while (cin.fail())
	{
		error_check(oct3);
		IPerror(name);
		goto THIRDOCTET;
	}
	if (oct3 < 0 || oct3 > 255)
	{
		IPerror(name);
		goto THIRDOCTET;
	}
	cout << "IP Address: " << oct1 << " . " << oct2  << " . " << oct3 << " . x";
	
	FOURTHOCTET:
	cout << "\n\nFourth Octet (0-255): ";
	cin >> oct4;
	while (cin.fail())
	{
		error_check(oct4);
		IPerror(name);
		goto FOURTHOCTET;
	}
	if (oct4 < 0 || oct4 > 255)
	{
		IPerror(name);
		goto FOURTHOCTET;
	}
	cout << "IP Address: " << oct1 << " . " << oct2  << " . " << oct3 << " . " << oct4 <<endl;
	
	cout << "\nBot: To reiterate, the IP address you have entered is: " << oct1 << "." << oct2  << "." << oct3 << "." << oct4;
	cout << ". "; system ("pause");
}


void addressidentifier(string &name){
	//IP address identifier
	int oct1, oct2, oct3, oct4;
	inputIP(name, oct1, oct2, oct3, oct4);
	IPprofile(oct1,oct2,oct3,oct4);
}


// subnet calculator -------------------------


void subnetA(int& subr, int& max, int& host){

	if (subr <= 2){
		max = 2;
		host = 8388606;
		cout << "- Borrowed Number of Bits from Host ID: 1" << endl;
		cout << "- Subnet Mask: 255.128.0.0" << endl;
		cout << "- CIDR: /9" << endl;
		cout << "- Host Addresses per Subnet: " << host << endl;
		cout << "- Maximum Number of Subnets: " << max << endl;
	}
	else if (subr <= 4) {
		max = 4;
		host = 4194302;
		cout << "- Borrowed Number of Bits from Host ID: 2" << endl;
		cout << "- Subnet Mask: 255.192.0.0" << endl;
		cout << "- CIDR: /10" << endl;
		cout << "- Host Addresses per Subnet: " << host << endl;
		cout << "- Maximum Number of Subnets: " << max << endl;
	}
	else if (subr <= 8) {
		max = 8;
		host = 2097150;
		cout << "- Borrowed Number of Bits from Host ID: 3" << endl;
		cout << "- Subnet Mask: 255.224.0.0" << endl;
		cout << "- CIDR: /11" << endl;
		cout << "- Host Addresses per Subnet: " << host << endl;
		cout << "- Maximum Number of Subnets: " << max << endl;
	}
	else if (subr <= 16) {
		max = 16;
		host = 1048574;
		cout << "- Borrowed Number of Bits from Host ID: 4" << endl;
		cout << "- Subnet Mask: 255.240.0.0" << endl;
		cout << "- CIDR: /12" << endl;
		cout << "- Host Addresses per Subnet: " << host << endl;
		cout << "- Maximum Number of Subnets: " << max << endl;
	}
	else if (subr <= 32) {
		max = 32;
		host = 524286;
		cout << "- Borrowed Number of Bits from Host ID: 5" << endl;
		cout << "- Subnet Mask: 255.248.0.0" << endl;
		cout << "- CIDR: /13" << endl;
		cout << "- Host Addresses per Subnet: " << host << endl;
		cout << "- Maximum Number of Subnets: " << max << endl;
	}
	else if (subr <= 64) {
		max = 64;
		host = 262142;
		cout << "- Borrowed Number of Bits from Host ID: 6" << endl;
		cout << "- Subnet Mask: 255.252.0.0" << endl;
		cout << "- CIDR: /14" << endl;
		cout << "- Host Addresses per Subnet: " << host << endl;
		cout << "- Maximum Number of Subnets: " << max << endl;
	}
	else if (subr <= 128) {
		max = 128;
		host = 131070;
		cout << "- Borrowed Number of Bits from Host ID: 7" << endl;
		cout << "- Subnet Mask: 255.254.0.0" << endl;
		cout << "- CIDR: /15" << endl;
		cout << "- Host Addresses per Subnet: " << host << endl;
		cout << "- Maximum Number of Subnets: " << max << endl;
	}
	else if (subr <= 256) {
		max = 256;
		host = 65534;
		cout << "- Borrowed Number of Bits from Host ID: 8" << endl;
		cout << "- Subnet Mask: 255.255.0.0" << endl;
		cout << "- CIDR: /16" << endl;
		cout << "- Host Addresses per Subnet: " << host << endl;
		cout << "- Maximum Number of Subnets: " << max << endl;
	}
	else if (subr <= 512) {
		max = 512;
		host = 32766;
		cout << "- Borrowed Number of Bits from Host ID: 9" << endl;
		cout << "- Subnet Mask: 255.255.128.0" << endl;
		cout << "- CIDR: /17" << endl;
		cout << "- Host Addresses per Subnet: " << host << endl;
		cout << "- Maximum Number of Subnets: " << max << endl;
	}
	else if (subr <= 1024) {
		max = 1024;
		host = 16382;
		cout << "- Borrowed Number of Bits from Host ID: 10" << endl;
		cout << "- Subnet Mask: 255.255.192.0" << endl;
		cout << "- CIDR: /18" << endl;
		cout << "- Host Addresses per Subnet: " << host << endl;
		cout << "- Maximum Number of Subnets: " << max << endl;
	}
	else if (subr <= 2048) {
		max = 2048;
		host = 8190;
		cout << "- Borrowed Number of Bits from Host ID: 11" << endl;
		cout << "- Subnet Mask: 255.255.224.0" << endl;
		cout << "- CIDR: /19" << endl;
		cout << "- Host Addresses per Subnet: " << host << endl;
		cout << "- Maximum Number of Subnets: " << max << endl;
	}
	else if (subr <= 4096) {
		max = 4096;
		host = 4094;
		cout << "- Borrowed Number of Bits from Host ID: 12" << endl;
		cout << "- Subnet Mask: 255.255.240.0" << endl;
		cout << "- CIDR: /20" << endl;
		cout << "- Host Addresses per Subnet: " << host << endl;
		cout << "- Maximum Number of Subnets: " << max << endl;
	}
	else if (subr <= 8192) {
		max = 8192;
		host = 2046;
		cout << "- Borrowed Number of Bits from Host ID: 13" << endl;
		cout << "- Subnet Mask: 255.255.248.0" << endl;
		cout << "- CIDR: /21" << endl;
		cout << "- Host Addresses per Subnet: " << host << endl;
		cout << "- Maximum Number of Subnets: " << max << endl;
	}
	else if (subr <= 16384) {
		max = 16384;
		host = 1022;
		cout << "- Borrowed Number of Bits from Host ID: 14" << endl;
		cout << "- Subnet Mask: 255.255.252.0" << endl;
		cout << "- CIDR: /22" << endl;
		cout << "- Host Addresses per Subnet: " << host << endl;
		cout << "- Maximum Number of Subnets: " << max << endl;
	}
	else if (subr <= 32768) {
		max = 32768;
		host = 510;
		cout << "- Borrowed Number of Bits from Host ID: 15" << endl;
		cout << "- Subnet Mask: 255.255.254.0" << endl;
		cout << "- CIDR: /23" << endl;
		cout << "- Host Addresses per Subnet: " << host << endl;
		cout << "- Maximum Number of Subnets: " << max << endl;
	}
	else if (subr <= 65536) {
		max = 65536;
		host = 254;
		cout << "- Borrowed Number of Bits from Host ID: 16" << endl;
		cout << "- Subnet Mask: 255.255.255.0" << endl;
		cout << "- CIDR: /24" << endl;
		cout << "- Host Addresses per Subnet: " << host << endl;
		cout << "- Maximum Number of Subnets: " << max << endl;
	}
	else if (subr <= 131072) {
		max = 131072;
		host = 126;
		cout << "- Borrowed Number of Bits from Host ID: 17" << endl;
		cout << "- Subnet Mask: 255.255.255.128" << endl;
		cout << "- CIDR: /25" << endl;
		cout << "- Host Addresses per Subnet: " << host << endl;
		cout << "- Maximum Number of Subnets: " << max << endl;
	}
	else if (subr <= 262144) {
		max = 262144;
		host = 62;
		cout << "- Borrowed Number of Bits from Host ID: 18" << endl;
		cout << "- Subnet Mask: 255.255.255.192" << endl;
		cout << "- CIDR: /26" << endl;
		cout << "- Host Addresses per Subnet: " << host << endl;
		cout << "- Maximum Number of Subnets: " << max << endl;
	}
	else if (subr <= 524288) {
		max = 524288;
		host = 30;
		cout << "- Borrowed Number of Bits from Host ID: 19" << endl;
		cout << "- Subnet Mask: 255.255.255.224" << endl;
		cout << "- CIDR: /27" << endl;
		cout << "- Host Addresses per Subnet: " << host << endl;
		cout << "- Maximum Number of Subnets: " << max << endl;
	}
	else if (subr <= 1048576) {
		max = 1048576;
		host = 14;
		cout << "- Borrowed Number of Bits from Host ID: 20" << endl;
		cout << "- Subnet Mask: 255.255.255.240" << endl;
		cout << "- CIDR: /28" << endl;
		cout << "- Host Addresses per Subnet: " << host << endl;
		cout << "- Maximum Number of Subnets: " << max << endl;
	}
	else if (subr <= 2097152) {
		max = 2097152;
		host = 6;
		cout << "- Borrowed Number of Bits from Host ID: 21" << endl;
		cout << "- Subnet Mask: 255.255.255.248" << endl;
		cout << "- CIDR: /29" << endl;
		cout << "- Host Addresses per Subnet: " << host << endl;
		cout << "- Maximum Number of Subnets: " << max << endl;
	}
	else if (subr <= 4194304) {
		max = 4194304;
		host = 2;
		cout << "- Borrowed Number of Bits from Host ID: 22" << endl;
		cout << "- Subnet Mask: 255.255.255.252" << endl;
		cout << "- CIDR: /30" << endl;
		cout << "- Host Addresses per Subnet: " << host << endl;
		cout << "- Maximum Number of Subnets: " << max << endl;
	}
}

void subnetB(int& subr, int& max, int& host){
	
	if (subr <= 2){
		max = 2;
		host = 32766;
		cout << "- Borrowed Number of Bits from Host ID: 1" << endl;
		cout << "- Subnet Mask: 255.255.128.0" << endl;
		cout << "- CIDR: /17" << endl;
		cout << "- Host Addresses per Subnet: " << host << endl;
		cout << "- Maximum Number of Subnets: " << max << endl;
	}
	else if (subr <= 4) {
		max = 4;
		host = 16382;
		cout << "- Borrowed Number of Bits from Host ID: 2" << endl;
		cout << "- Subnet Mask: 255.255.192.0" << endl;
		cout << "- CIDR: /18" << endl;
		cout << "- Host Addresses per Subnet: " << host << endl;
		cout << "- Maximum Number of Subnets: " << max << endl;
	}
	else if (subr <= 8) {
		max = 8;
		host = 8190;
		cout << "- Borrowed Number of Bits from Host ID: 3" << endl;
		cout << "- Subnet Mask: 255.255.224.0" << endl;
		cout << "- CIDR: /19" << endl;
		cout << "- Host Addresses per Subnet: " << host << endl;
		cout << "- Maximum Number of Subnets: " << max << endl;
	}
	else if (subr <= 16) {
		max = 16;
		host = 4094;
		cout << "- Borrowed Number of Bits from Host ID: 4" << endl;
		cout << "- Subnet Mask: 255.255.240.0" << endl;
		cout << "- CIDR: /20" << endl;
		cout << "- Host Addresses per Subnet: " << host << endl;
		cout << "- Maximum Number of Subnets: " << max << endl;
	}
	else if (subr <= 32) {
		max = 32;
		host = 2046;
		cout << "- Borrowed Number of Bits from Host ID: 5" << endl;
		cout << "- Subnet Mask: 255.255.248.0" << endl;
		cout << "- CIDR: /21" << endl;
		cout << "- Host Addresses per Subnet: " << host << endl;
		cout << "- Maximum Number of Subnets: " << max << endl;
	}
	else if (subr <= 64) {
		max = 64;
		host = 1022;
		cout << "- Borrowed Number of Bits from Host ID: 6" << endl;
		cout << "- Subnet Mask: 255.255.252.0" << endl;
		cout << "- CIDR: /22" << endl;
		cout << "- Host Addresses per Subnet: " << host << endl;
		cout << "- Maximum Number of Subnets: " << max << endl;
	}
	else if (subr <= 128) {
		max = 128;
		host = 510;
		cout << "- Borrowed Number of Bits from Host ID: 7" << endl;
		cout << "- Subnet Mask: 255.255.254.0" << endl;
		cout << "- CIDR: /23" << endl;
		cout << "- Host Addresses per Subnet: " << host << endl;
		cout << "- Maximum Number of Subnets: " << max << endl;
	}
	else if (subr <= 256) {
		max = 256;
		host = 254;
		cout << "- Borrowed Number of Bits from Host ID: 8" << endl;
		cout << "- Subnet Mask: 255.255.255.0" << endl;
		cout << "- CIDR: /24" << endl;
		cout << "- Host Addresses per Subnet: " << host << endl;
		cout << "- Maximum Number of Subnets: " << max << endl;
	}
	else if (subr <= 512) {
		max = 512;
		host = 126;
		cout << "- Borrowed Number of Bits from Host ID: 9" << endl;
		cout << "- Subnet Mask: 255.255.255.128" << endl;
		cout << "- CIDR: /25" << endl;
		cout << "- Host Addresses per Subnet: " << host << endl;
		cout << "- Maximum Number of Subnets: " << max << endl;
	}
	else if (subr <= 1024) {
		max = 1024;
		host = 62;
		cout << "- Borrowed Number of Bits from Host ID: 10" << endl;
		cout << "- Subnet Mask: 255.255.255.192" << endl;
		cout << "- CIDR: /26" << endl;
		cout << "- Host Addresses per Subnet: " << host << endl;
		cout << "- Maximum Number of Subnets: " << max << endl;
	}
	else if (subr <= 2048) {
		max = 2048;
		host = 30;
		cout << "- Borrowed Number of Bits from Host ID: 11" << endl;
		cout << "- Subnet Mask: 255.255.255.224" << endl;
		cout << "- CIDR: /27" << endl;
		cout << "- Host Addresses per Subnet: " << host << endl;
		cout << "- Maximum Number of Subnets: " << max << endl;
	}
	else if (subr <= 4096) {
		max = 4096;
		host = 14;
		cout << "- Borrowed Number of Bits from Host ID: 12" << endl;
		cout << "- Subnet Mask: 255.255.255.240" << endl;
		cout << "- CIDR: /28" << endl;
		cout << "- Host Addresses per Subnet: " << host << endl;
		cout << "- Maximum Number of Subnets: " << max << endl;
	}
	else if (subr <= 8192) {
		max = 8192;
		host = 6;
		cout << "- Borrowed Number of Bits from Host ID: 13" << endl;
		cout << "- Subnet Mask: 255.255.255.248" << endl;
		cout << "- CIDR: /29" << endl;
		cout << "- Host Addresses per Subnet: " << host << endl;
		cout << "- Maximum Number of Subnets: " << max << endl;
	}
	else if (subr <= 16384) {
		max = 16384;
		host = 2;
		cout << "- Borrowed Number of Bits from Host ID: 14" << endl;
		cout << "- Subnet Mask: 255.255.255.252" << endl;
		cout << "- CIDR: /30" << endl;
		cout << "- Host Addresses per Subnet: " << host << endl;
		cout << "- Maximum Number of Subnets: " << max << endl;
	}
	
}


void subnetC(int& subr, int& max, int& host){

	if (subr <= 2){
		max = 2;
		host = 126;
		cout << "- Borrowed Number of Bits from Host ID: 1" << endl;
		cout << "- Subnet Mask: 255.255.255.128" << endl;
		cout << "- CIDR: /25" << endl;
		cout << "- Host Addresses per Subnet: " << host << endl;
		cout << "- Maximum Number of Subnets: " << max << endl;
	}
	else if (subr <= 4) {
		max = 4;
		host = 62;
		cout << "- Borrowed Number of Bits from Host ID: 2" << endl;
		cout << "- Subnet Mask: 255.255.255.192" << endl;
		cout << "- CIDR: /26" << endl;
		cout << "- Host Addresses per Subnet: " << host << endl;
		cout << "- Maximum Number of Subnets: " << max << endl;
	}
	else if (subr <= 8) {
		max = 8;
		host = 30;
		cout << "- Borrowed Number of Bits from Host ID: 3" << endl;
		cout << "- Subnet Mask: 255.255.255.224" << endl;
		cout << "- CIDR: /27" << endl;
		cout << "- Host Addresses per Subnet: " << host << endl;
		cout << "- Maximum Number of Subnets: " << max << endl;
	}
	else if (subr <= 16) {
		max = 16;
		host = 14;
		cout << "- Borrowed Number of Bits from Host ID: 4" << endl;
		cout << "- Subnet Mask: 255.255.255.240" << endl;
		cout << "- CIDR: /28" << endl;
		cout << "- Host Addresses per Subnet: " << host << endl;
		cout << "- Maximum Number of Subnets: " << max << endl;
		
	}
	else if (subr <= 32) {
		max = 32;
		host = 6;
		cout << "- Borrowed Number of Bits from Host ID: 5" << endl;
		cout << "- Subnet Mask: 255.255.255.248" << endl;
		cout << "- CIDR: /29" << endl;
		cout << "- Host Addresses per Subnet: " << host << endl;
		cout << "- Maximum Number of Subnets: " << max << endl;
		
	}
	else if (subr <= 64) {
		max = 64;
		host = 2;
		cout << "- Borrowed Number of Bits from Host ID: 6" << endl;
		cout << "- Subnet Mask: 255.255.255.252" << endl;
		cout << "- CIDR: /30" << endl;
		cout << "- Host Addresses per Subnet: " << host << endl;
		cout << "- Maximum Number of Subnets: " << max << endl;
		
	}
}

void excess(int& max, int& subr){
	int x = max - subr;
	if (x == 1){
		cout << "\nBot: Additionally, there is only one (1) subnet left for future expansion of the network. ";
	}
	else if (x > 1){
		cout << "\nBot: Additionally, there are still " << x << " subnets left to expand the network for future use. ";
	}
	system("pause");
}

void NB_id(int& oct1,int& oct2,int& oct3,int& host, string& classIP){

	if (classIP == "C"){
		cout << "- Subnet ID: " << oct1 << "." << oct2 << "." << oct3 << "." << "0" << endl;
		cout << "- Broadcast Address: " << oct1 << "." << oct2 << "." << oct3 << "." << host + 1 << endl;
	}
}

void subnetcalc(string &name){
	int oct1, oct2, oct3, oct4;
	int subr, host, max;
	string classIP;
	
	cout << "\nBot: IPBot will help you create the required number of subnets for any Class A-C IPv4 Address." << endl; 
	INPUT:
	inputIP(name, oct1, oct2, oct3, oct4);
	
	//class check
	if (oct1 >=1 && oct1 <= 126)
		{
			classIP = "A";
		}
	else if (oct1 >= 127 && oct1 <= 191)
		{
			classIP = "B";
		}
	else if (oct1 >= 192 && oct1 <= 223)
		{
			classIP = "C";
		}
	else {
		cout << endl << "Bot: Only Class A-C IPv4 Addresses can be calculated by IPBot. ";
		system ("pause");
		cout << endl;
		goto INPUT;
	}

	SUBNET:
	cout << "\nBot: How many subnets do you want to create with the IP Address: " << oct1 << "." << oct2 << "." << oct3 << "." << oct4 << "?" << endl;
	cout << endl << name + ": "; cin >> subr;
	error_check(subr);
	
	//subnet max check
	if  (classIP == "A"){
		if (subr > 4194304){
			cout << "\nBot: Unfortunately, you can only create up to 4194304 subnets in an IPv4 Class A IP address." << endl;
			goto SUBNET;
		}
	}
	else if (classIP == "B"){
		if (subr > 16384){
			cout << "\nBot: Unfortunately, you can only create up to 16384 subnets in an IPv4 Class B IP address." << endl;
			goto SUBNET;
		}	
	}
	else if (classIP == "C"){
		if (subr > 64){
			cout << "\nBot: Unfortunately, you can only create up to 64 subnets in an IPv4 Class C IP address." << endl;
			goto SUBNET;
		}	
	}
	
	cout << "\nBot: In order to create " << subr << " subnets based on the IP address given, here are the things you need to know:" <<endl;
	
	if  (classIP == "A"){
		subnetA(subr, max, host);
	}
	else if (classIP == "B"){
		subnetB(subr, max, host);	
	}
	else if (classIP == "C"){
		subnetC(subr, max, host);	
	}
	
	NB_id(oct1, oct2, oct3, host, classIP);
	excess(max, subr);
}

// help - main menu -------------------------

void help() {
	//explains the 3 functionalities of the bot
	cout << "\nBot: To know the general concepts and terms use in IP adressing, please enter 1. ";
	cout << "To identify the general information from the IP address of your choice, please enter 2. ";
	cout << "To use the IPBot's subnet calculator, please enter 3. ";
	cout << "Finally, please enter 5 if you want to exit this conversation. ";
	system ("pause");
	cout << "\nBot: In general, you just need to enter the number corresponding to choices available unless it's stated otherwise! ";
	system ("pause");
	 
}

//main menu --------------------------

void mainmenu(string& name)
{ 
	int answer, choice;
	MENU:
		cout << "\nBot: How may I help you today? Please input the number corresponding to your choice!";
		cout << "\n(1) IP Addresing Discussion\n(2) IPv4 Address Identifier\n(3) IPv4 Subnet Calculator\n(4) Help\n(5) Exit" << endl << endl; 
		cout << name + ": "; cin >> answer; 
	
	error_check(answer);		
	switch (answer)
	{
		case 1:
		    discussionmenu(name);
			goto MENU;
			break;
		case 2:
			addressidentifier(name);
			goto MENU;
			break;
		case 3:
			subnetcalc(name);
			goto MENU;
			break;
		case 4:
			help();
			goto MENU;
			break;
		case 5:
			break;
		default:
			error(name);
			goto MENU;
	}
}

//main program ------------------------

int main() 
{
	string username;
	cout << "\t\t\t\t  WELCOME TO IPBot\n";
	cout << "\t\t\t        _____________________\n";
	cout << "\t\t\t       | ___________________ |\n";
	cout << "\t\t\t       ||                   ||\n";
	cout << "\t\t\t       ||  [.]         [.]  ||\n";
	cout << "\t\t\t       ||                   ||\n";
	cout << "\t\t\t       ||     |_______|     ||\n";
	cout << "\t\t\t       ||___________________||\n";
	cout << "\t\t\t       |_____________________|\n";
	cout << "\t\t\t              _|     |_\n";
	cout << "\t\t\t             |_________|\n";
	cout << "____________________________________________________________________________________\n\n";
	cout << "Bot: Hello, I am IPBot - your IP addressing assistant. What's your name? \n\n"; 
	cout << "User: "; cin >> username;
	cout << "\nBot: Hey, " + username <<"! Let's get started! ";
	system ("pause");
	
	mainmenu(username);
	goodbye(username);
	return(0);
}
