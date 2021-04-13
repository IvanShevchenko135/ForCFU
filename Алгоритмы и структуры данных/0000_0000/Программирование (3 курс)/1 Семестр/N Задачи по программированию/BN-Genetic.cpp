#include <iostream>
#include <cstring>
#include <cstdio>
#include <cstdlib>
 

char a[100];
char b[100];

using namespace std;

bool proverkanaT(char *a, int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==84){
			return true;
		}
    }
    return false;
}

bool proverka(char *a, char *b, int lenA, int lenB)
{
    int i,j,q,z;
    char c[100];
    for(i=0;i<lenA;i++)
    {
        if(a[i]==b[0])
        {
            memset(c,0,sizeof(c));
            int prov=0;//0 это верно
            q=0;
            for(j=i;j<lenB+i;j++)
            {
                c[q]=a[j];
                q++;
            }
            for(z=0;z<lenB;z++)
            {
                if(c[z]!=b[z])
                {
                    prov=1;
                }
            }
            if(prov==0)
                return true;
        }
    }
    return false;
}

int main(int argc, char** argv){   
    int T;
    cin>>T;
    while(T--)
    {
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        scanf("%s",a);
        scanf("%s",b);
        int lenA=strlen(a);
        int lenB=strlen(b);
        bool checkT=proverkanaT(a,lenA);//1-true//0-false
        bool check=proverka(a,b,lenA,lenB);
        if(checkT==1 && check==1)cout<<"Y"<<endl;
        else cout<<"N"<<endl;
    }

    return 0;
}
/*
Deoxyribonucleic acid (DNA) is a molecule that encodes the genetic instructions used in the development and functioning of all known living organisms and many viruses. Along with RNA and proteins, DNA is one of the three major macromolecules essential for all known forms of life. Genetic information is encoded as a sequence of nucleotides (guanine, adenine, thymine, and cytosine) recorded using the letters G, A, T, and C. Most DNA molecules are double-stranded helices, consisting of two long polymers of simple units called nucleotides, molecules with backbones made of alternating sugars (deoxyribose) and phosphate groups (related to phosphoric acid), with the nucleobases (G, A, T, C) attached to the sugars. DNA is well-suited for biological information storage, since the DNA backbone is resistant to cleavage and the double-stranded structure provides the molecule with a built-in duplicate of the encoded information.

For clarity, let's say that a DNA chain can be written as a sequence of nucleobases, eg. "AGCCTC".

Scientifics of UTP have hired you to accomplish the following task: given two chains of DNA, M and N, your job is to decide whether M could have been generated from N. A chain M can be generated from a chain N, if it is possible to obtain M just by adding zero or most nucleobases either to the left or right of chain N. Additionally, as UTP is obsessed with thymine, they say that in order for M to be generated from N, M must have at least one thymine.
*/
