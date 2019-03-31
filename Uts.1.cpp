#include <iostream>
using namespace std;

int main ()
{

struct mahasiswa
{
    char nama [50];
    char nim [50];
    char kelas [50];
    char tahunangkatan [50];

}
mhs [3];
for (int i=0; i<3; i++)
{
    cout<<"nama : ";
    cin>>mhs[i].nama;
    cout<<"nim : ";
    cin>>mhs[i].nim;
    cout<<"kelas : ";
    cin>>mhs[i].kelas;
    cout<<"tahun angatan : ";
    cin>>mhs[i].tahunangkatan;
}
for (int i=0; i<3; i++)
{
    cout<<"nama mahasiswa : "<<mhs[i].nama<<endl;
    cout<<"nim            : "<<mhs[i].nim<<endl;
    cout<<"kelas          : "<<mhs[i].kelas<<endl;
    cout<<"tahunangkatan : "<<mhs[i].tahunangkatan<<endl;
}
    return 0;
}

