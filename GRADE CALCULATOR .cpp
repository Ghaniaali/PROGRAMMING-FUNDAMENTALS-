#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Student{
    int id;
    string name;
    int marks[3];
    double average;
    char grade;
};

double calculateAverage(Student data[],int n,int id){
	
    double sum = 0.0;
    for (int i=0;i<n;i++){
    	
        sum+=data[id].marks[i];
    }
    return sum/n;
}

char Grade(double average){
    if (average >= 90){
        return 'A';
    }
	else if (average >= 80){
        return 'B';
    }
    else if (average >= 70){
        return 'C';
    }
    else if (average >= 60){
        return 'D';
    }
    else{
        return 'F';
    }
}

int main(){
	
    char ch;
    Student data[3];
    ifstream inputFile("student.txt");
    if (!inputFile.is_open())
    {
        cerr<<"Error opening input file!"<<endl;
        return 0;
    }
    string firstLine;
    getline(inputFile, firstLine);
    
    for (int i=0;i<3;i++){
        inputFile>>data[i].id;
        inputFile>>data[i].name;
        
        for (int j=0;j<3;j++){
        	
            inputFile >> data[i].marks[j];
        }
        
        data[i].average=calculateAverage(data,3,i);
        data[i].grade=Grade(data[i].average);
    }
    
    ofstream outputFile("results.txt");
    if (!outputFile.is_open()){
        cerr<<"Error opening output file!"<<endl;
        return 0;
    }
    
    outputFile<<"ID Name Average Grade"<<endl;
    
    for (int i=0;i<3;i++){
    	
        outputFile<<data[i].id<<" "<<data[i].name<<" "<<data[i].average<<" "<<data[i].grade<<endl;
    }
    cout<<"Student data processed successfully!" << endl;
    cout<<"Do you want to view file in console(Y/N): ";
    cin>>ch;
    string line;
    if (ch == 'y'){
    	
        ifstream output2("results.txt");
        while (!output2.eof()){
        	
            getline(output2,line, ' ');
            cout<<line << "\t";
        }
        
        output2.close();
    }
    return 0;
}
