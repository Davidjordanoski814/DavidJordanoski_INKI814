#include <iostream>
using namespace std;
int main()
{
    //David Jordanoski 814, Zadacha broj-27, Presmetka na temperaturi niz deset gradovi niz Makedonija
    float p,s,b,o,v,g,t,d,k,m,xp=0,axp=1,xs=0,axs=1,xb=0,axb=1,xo=0,axo=1,xv=0,axv=1,xg=0,axg=1,xt=0,axt=1,xd=0,axd=1,xk=0,axk=1,xm=0,axm=1,agpt=1;
    float xpp,proletprilep,martprilep,aprilprilep,majprilep,juniprilep,juliprilep,avgustprilep,septemvriprilep,oktomvriprilep,noemvriprilep,dekemvriprilep,januariprilep,fevruariprilep;
    float letoprilep,esenprilep,zimaprilep,proletskopje,letoskopje,esenskopje,zimaskopje;
    float martskopje,aprilskopje,majskopje,juniskopje,juliskopje,avgustskopje,septemvriskopje,oktomvriskopje,noemvriskopje,dekemvriskopje,januariskopje,fevruariskopje;
    float proletbitola,letobitola,esenbitola,zimabitola,martbitola,aprilbitola,majbitola,junibitola,julibitola,avgustbitola,septemvribitola,oktomvribitola,noemvribitola,dekemvribitola,januaribitola,fevruaribitola;
    float proletohrid,letoohrid,esenohrid,zimaohrid,martohrid,aprilohrid,majohrid,juniohrid,juliohrid,avgustohrid,septemvriohrid,oktomvriohrid,noemvriohrid,dekemvriohrid,januariohrid,fevruariohrid;
    float proletveles,letoveles,esenveles,zimaveles,martveles,aprilveles,majveles,juniveles,juliveles,avgustveles,septemvriveles,oktomvriveles,noemvriveles,dekemvriveles,januariveles,fevruariveles;
    float proletgostivar,letogostivar,esengostivar,zimagostivar,martgostivar,aprilgostivar,majgostivar,junigostivar,juligostivar,avgustgostivar,septemvrigostivar,oktomvrigostivar,noemvrigostivar,dekemvrigostivar,januarigostivar,fevruarigostivar;
    float proletdebar,letodebar,esendebar,zimadebar,martdebar,aprildebar,majdebar,junidebar,julidebar,avgustdebar,septemvridebar,oktomvridebar,noemvridebar,dekemvridebar,januaridebar,fevruaridebar;
    float prolettetovo,letotetovo,esentetovo,zimatetovo,marttetovo,apriltetovo,majtetovo,junitetovo,julitetovo,avgusttetovo,septemvritetovo,oktomvritetovo,noemvritetovo,dekemvritetovo,januaritetovo,fevruaritetovo;
    float proletkumanovo,letokumanovo,esenkumanovo,zimakumanovo,martkumanovo,aprilkumanovo,majkumanovo,junikumanovo,julikumanovo,avgustkumanovo,septemvrikumanovo,oktomvrikumanovo,noemvrikumanovo,dekemvrikumanovo,januarikumanovo,fevruarikumanovo;
    float proletbrod,letobrod,esenbrod,zimabrod,martbrod,aprilbrod,majbrod,junibrod,julibrod,avgustbrod,septemvribrod,oktomvribrod,noemvribrod,dekemvribrod,januaribrod,fevruaribrod;
    float mesectemp;
    int i;
    cout<<"Vnesi gi prosecnite mesechni temeperaturi za Prilep za edna godina!"<<endl;
    for(i=1;i<=12;i++)
    {
        cin>>p;
        xp+=p;
        axp=xp/12;
    }
    cout<<"Prosecnata godisna temperatura za Prilep e: "<<axp<<" Celzjusovi stepeni!"<<endl;

    cout<<"Vnesi gi prosecnite mesechni temeperaturi za Skopje za edna godina!"<<endl;
    for(i=1;i<=12;i++)
    {
        cin>>s;
        xs+=s;
        axs=xs/12;
    }
    cout<<"Prosecnata godisna temperatura za Skopje e: "<<axs<<" Celzjusovi stepeni!"<<endl;

    cout<<"Vnesi gi prosecnite mesechni temeperaturi za Bitola za edna godina!"<<endl;
    for(i=1;i<=12;i++)
    {
        cin>>b;
        xb+=b;
        axb=xb/12;
    }
    cout<<"Prosecnata godisna temperatura za Bitola e: "<<axb<<" Celzjusovi stepeni!"<<endl;

    cout<<"Vnesi gi prosecnite mesechni temeperaturi za Ohrid za edna godina!"<<endl;
    for(i=1;i<=12;i++)
    {
        cin>>o;
        xo+=o;
        axo=xo/12;
    }
    cout<<"Prosecnata godisna temperatura za Ohrid e: "<<axo<<" Celzjusovi stepeni!"<<endl;

    cout<<"Vnesi gi prosecnite mesechni temeperaturi za Veles za edna godina!"<<endl;
    for(i=1;i<=12;i++)
    {
        cin>>v;
        xv+=v;
        axv=xv/12;
    }
    cout<<"Prosecnata godisna temperatura za Veles e: "<<axv<<" Celzjusovi stepeni!"<<endl;

    cout<<"Vnesi gi prosecnite mesechni temeperaturi za Gostivar za edna godina!"<<endl;
    for(i=1;i<=12;i++)
    {
        cin>>g;
        xg+=g;
        axg=xg/12;
    }
    cout<<"Prosecnata godisna temperatura za Gostivar e: "<<axg<<" Celzjusovi stepeni!"<<endl;

    cout<<"Vnesi gi prosecnite mesechni temeperaturi za Tetovo za edna godina!"<<endl;
    for(i=1;i<=12;i++)
    {
        cin>>t;
        xt+=t;
        axt=xt/12;
    }
    cout<<"Prosecnata godisna temperatura za Tetovo e: "<<axt<<" Celzjusovi stepeni!"<<endl;

    cout<<"Vnesi gi prosecnite mesechni temeperaturi za Debar za edna godina!"<<endl;
    for(i=1;i<=12;i++)
    {
        cin>>d;
        xd+=d;
        axd=xd/12;
    }
    cout<<"Prosecnata godisna temperatura za Debar e: "<<axd<<" Celzjusovi stepeni!"<<endl;

    cout<<"Vnesi gi prosecnite mesechni temeperaturi za Kumanovo za edna godina!"<<endl;
    for(i=1;i<=12;i++)
    {
        cin>>k;
        xk+=k;
        axk=xk/12;
    }
    cout<<"Prosecnata godisna temperatura za Kumanovo e: "<<axk<<" Celzjusovi stepeni!"<<endl;

    cout<<"Vnesi gi prosecnite mesechni temeperaturi za Makedonski Brod za edna godina!"<<endl;
    for(i=1;i<=12;i++)
    {
        cin>>m;
        xm+=m;
        axm=xm/12;
    }
    cout<<"Prosecnata godisna temperatura za Makedonski Brod e: "<<axm<<" Celzjusovi stepeni!"<<endl;

    agpt=(axp+axs+axb+axo+axv+axg+axt+axd+axk+axm)/10;
    cout<<"Prosecnata godisna temperatura od site 10 gradovi e:"<<agpt<<endl;
    if(axp>agpt)
    {
        cout<<"Prilep ima povisoka prosechna godishna temperatura nad godishniot prosek!"<<endl;
    }
    if(axs>agpt)
    {
        cout<<"Skopje ima povisoka prosechna godishna temperatura nad godishniot prosek!"<<endl;
    }
    if(axb>agpt)
    {
        cout<<"Bitola ima povisoka prosechna godishna temperatura nad godishniot prosek!"<<endl;
    }
    if(axo>agpt)
    {
        cout<<"Ohrid ima povisoka prosechna godishna temperatura nad godishniot prosek!"<<endl;
    }
    if(axv>agpt)
    {
        cout<<"Veles ima povisoka prosechna godishna temperatura nad godishniot prosek!"<<endl;
    }
    if(axg>agpt)
    {
        cout<<"Gostivar ima povisoka prosechna godishna temperatura nad godishniot prosek!"<<endl;
    }
    if(axt>agpt)
    {
        cout<<"Tetovo ima povisoka prosechna godishna temperatura nad godishniot prosek!"<<endl;
    }
    if(axd>agpt)
    {
        cout<<"Debar ima povisoka prosechna godishna temperatura nad godishniot prosek!"<<endl;
    }
    if(axk>agpt)
    {
        cout<<"Kumanovo ima povisoka prosechna godishna temperatura nad godishniot prosek!"<<endl;
    }
    if(axm>agpt)
    {
        cout<<"Makedonski Brod ima povisoka prosechna godishna temperatura nad godishniot prosek!"<<endl;
    }


    cout<<"Vnesi gi temperaturite za site godisni vreminja za Prilep"<<endl;
    cout<<"Prolet"<<endl;
    cin>>martprilep;
    cin>>aprilprilep;
    cin>>majprilep;
    cout<<"leto"<<endl;
    cin>>juniprilep;
    cin>>juliprilep;
    cin>>avgustprilep;
    cout<<"esen"<<endl;
    cin>>septemvriprilep;
    cin>>oktomvriprilep;
    cin>>noemvriprilep;
    cout<<"zima"<<endl;
    cin>>dekemvriprilep;
    cin>>januariprilep;
    cin>>fevruariprilep;

    proletprilep=(martprilep+aprilprilep+majprilep)/3;
    letoprilep=(juniprilep+juliprilep+avgustprilep)/3;
    esenprilep=(septemvriprilep+oktomvriprilep+noemvriprilep)/3;
    zimaprilep=(dekemvriprilep+januariprilep+fevruariprilep)/3;
    cout<<"Prosecnata temperatura za prolet vo Prilep e:"<<proletprilep<<endl;
    cout<<"Prosecnata temperatura za leto vo Prilep e:"<<letoprilep<<endl;
    cout<<"Prosecnata temperatura za esen vo Prilep e:"<<esenprilep<<endl;
    cout<<"Prosecnata temperatura za zima vo Prilep e:"<<zimaprilep<<endl;


    cout<<"Vnesi gi temperaturite za site godisni vreminja za Skopje"<<endl;
    cout<<"Prolet"<<endl;
    cin>>martskopje;
    cin>>aprilskopje;
    cin>>majskopje;
    cout<<"leto"<<endl;
    cin>>juniskopje;
    cin>>juliskopje;
    cin>>avgustskopje;
    cout<<"esen"<<endl;
    cin>>septemvriskopje;
    cin>>oktomvriskopje;
    cin>>noemvriskopje;
    cout<<"zima"<<endl;
    cin>>dekemvriskopje;
    cin>>januariskopje;
    cin>>fevruariskopje;

    proletskopje=(martskopje+aprilskopje+majskopje)/3;
    letoskopje=(juniskopje+juliskopje+avgustskopje)/3;
    esenskopje=(septemvriskopje+oktomvriskopje+noemvriskopje)/3;
    zimaskopje=(dekemvriskopje+januariskopje+fevruariskopje)/3;
    cout<<"Prosecnata temperatura za prolet vo Skopje e:"<<proletskopje<<endl;
    cout<<"Prosecnata temperatura za leto vo Skopje e:"<<letoskopje<<endl;
    cout<<"Prosecnata temperatura za esen vo Skopje e:"<<esenskopje<<endl;
    cout<<"Prosecnata temperatura za zima vo Skopje e:"<<zimaskopje<<endl;


    cout<<"Vnesi gi temperaturite za site godisni vreminja za Bitola"<<endl;
    cout<<"Prolet"<<endl;
    cin>>martbitola;
    cin>>aprilbitola;
    cin>>majbitola;
    cout<<"leto"<<endl;
    cin>>junibitola;
    cin>>julibitola;
    cin>>avgustbitola;
    cout<<"esen"<<endl;
    cin>>septemvribitola;
    cin>>oktomvribitola;
    cin>>noemvribitola;
    cout<<"zima"<<endl;
    cin>>dekemvribitola;
    cin>>januaribitola;
    cin>>fevruaribitola;

    proletbitola=(martbitola+aprilbitola+majbitola)/3;
    letobitola=(junibitola+julibitola+avgustbitola)/3;
    esenbitola=(septemvribitola+oktomvribitola+noemvribitola)/3;
    zimabitola=(dekemvribitola+januaribitola+fevruaribitola)/3;
    cout<<"Prosecnata temperatura za prolet vo Bitola e:"<<proletbitola<<endl;
    cout<<"Prosecnata temperatura za leto vo Bitola e:"<<letobitola<<endl;
    cout<<"Prosecnata temperatura za esen vo Bitola e:"<<esenbitola<<endl;
    cout<<"Prosecnata temperatura za zima vo Bitola e:"<<zimabitola<<endl;


    cout<<"Vnesi gi temperaturite za site godisni vreminja za Ohrid"<<endl;
    cout<<"Prolet"<<endl;
    cin>>martohrid;
    cin>>aprilohrid;
    cin>>majohrid;
    cout<<"leto"<<endl;
    cin>>juniohrid;
    cin>>juliohrid;
    cin>>avgustohrid;
    cout<<"esen"<<endl;
    cin>>septemvriohrid;
    cin>>oktomvriohrid;
    cin>>noemvriohrid;
    cout<<"zima"<<endl;
    cin>>dekemvriohrid;
    cin>>januariohrid;
    cin>>fevruariohrid;

    proletohrid=(martohrid+aprilohrid+majohrid)/3;
    letoohrid=(juniohrid+juliohrid+avgustohrid)/3;
    esenohrid=(septemvriohrid+oktomvriohrid+noemvriohrid)/3;
    zimaohrid=(dekemvriohrid+januariohrid+fevruariohrid)/3;
    cout<<"Prosecnata temperatura za prolet vo Ohrid e:"<<proletohrid<<endl;
    cout<<"Prosecnata temperatura za leto vo Ohrid e:"<<letoohrid<<endl;
    cout<<"Prosecnata temperatura za esen vo Ohrid e:"<<esenohrid<<endl;
    cout<<"Prosecnata temperatura za zima vo Ohrid e:"<<zimaohrid<<endl;



    cout<<"Vnesi gi temperaturite za site godisni vreminja za Veles"<<endl;
    cout<<"Prolet"<<endl;
    cin>>martveles;
    cin>>aprilveles;
    cin>>majveles;
    cout<<"leto"<<endl;
    cin>>juniveles;
    cin>>juliveles;
    cin>>avgustveles;
    cout<<"esen"<<endl;
    cin>>septemvriveles;
    cin>>oktomvriveles;
    cin>>noemvriveles;
    cout<<"zima"<<endl;
    cin>>dekemvriveles;
    cin>>januariveles;
    cin>>fevruariveles;

    proletveles=(martveles+aprilveles+majveles)/3;
    letoveles=(juniohrid+juliohrid+avgustohrid)/3;
    esenveles=(septemvriveles+oktomvriveles+noemvriveles)/3;
    zimaveles=(dekemvriveles+januariveles+fevruariveles)/3;
    cout<<"Prosecnata temperatura za prolet vo Veles e:"<<proletveles<<endl;
    cout<<"Prosecnata temperatura za leto vo Veles e:"<<letoveles<<endl;
    cout<<"Prosecnata temperatura za esen vo Veles e:"<<esenveles<<endl;
    cout<<"Prosecnata temperatura za zima vo Veles e:"<<zimaveles<<endl;


    cout<<"Vnesi gi temperaturite za site godisni vreminja za Gostivar"<<endl;
    cout<<"Prolet"<<endl;
    cin>>martgostivar;
    cin>>aprilgostivar;
    cin>>majgostivar;
    cout<<"leto"<<endl;
    cin>>junigostivar;
    cin>>juligostivar;
    cin>>avgustgostivar;
    cout<<"esen"<<endl;
    cin>>septemvrigostivar;
    cin>>oktomvrigostivar;
    cin>>noemvrigostivar;
    cout<<"zima"<<endl;
    cin>>dekemvrigostivar;
    cin>>januarigostivar;
    cin>>fevruarigostivar;

    proletgostivar=(martgostivar+aprilgostivar+majgostivar)/3;
    letogostivar=(junigostivar+juligostivar+avgustgostivar)/3;
    esengostivar=(septemvrigostivar+oktomvrigostivar+noemvrigostivar)/3;
    zimagostivar=(dekemvrigostivar+januarigostivar+fevruarigostivar)/3;
    cout<<"Prosecnata temperatura za prolet vo Gostivar e:"<<proletgostivar<<endl;
    cout<<"Prosecnata temperatura za leto vo Gostivar e:"<<letogostivar<<endl;
    cout<<"Prosecnata temperatura za esen vo Gostivar e:"<<esengostivar<<endl;
    cout<<"Prosecnata temperatura za zima vo Gostivar e:"<<zimagostivar<<endl;


    cout<<"Vnesi gi temperaturite za site godisni vreminja za Tetovo"<<endl;
    cout<<"Prolet"<<endl;
    cin>>marttetovo;
    cin>>apriltetovo;
    cin>>majtetovo;
    cout<<"leto"<<endl;
    cin>>junitetovo;
    cin>>julitetovo;
    cin>>avgusttetovo;
    cout<<"esen"<<endl;
    cin>>septemvritetovo;
    cin>>oktomvritetovo;
    cin>>noemvritetovo;
    cout<<"zima"<<endl;
    cin>>dekemvritetovo;
    cin>>januaritetovo;
    cin>>fevruaritetovo;

    prolettetovo=(marttetovo+apriltetovo+majtetovo)/3;
    letotetovo=(junitetovo+julitetovo+avgusttetovo)/3;
    esentetovo=(septemvritetovo+oktomvritetovo+noemvritetovo)/3;
    zimatetovo=(dekemvritetovo+januaritetovo+fevruaritetovo)/3;
    cout<<"Prosecnata temperatura za prolet vo Tetovo e:"<<prolettetovo<<endl;
    cout<<"Prosecnata temperatura za leto vo Tetovo e:"<<letotetovo<<endl;
    cout<<"Prosecnata temperatura za esen vo Tetovo e:"<<esentetovo<<endl;
    cout<<"Prosecnata temperatura za zima vo Tetovo e:"<<zimatetovo<<endl;


    cout<<"Vnesi gi temperaturite za site godisni vreminja za Debar"<<endl;
    cout<<"Prolet"<<endl;
    cin>>martdebar;
    cin>>aprildebar;
    cin>>majdebar;
    cout<<"leto"<<endl;
    cin>>junidebar;
    cin>>julidebar;
    cin>>avgustdebar;
    cout<<"esen"<<endl;
    cin>>septemvridebar;
    cin>>oktomvridebar;
    cin>>noemvridebar;
    cout<<"zima"<<endl;
    cin>>dekemvridebar;
    cin>>januaridebar;
    cin>>fevruaridebar;

    proletdebar=(martdebar+aprildebar+majdebar)/3;
    letodebar=(junidebar+julidebar+avgustdebar)/3;
    esendebar=(septemvridebar+oktomvridebar+noemvridebar)/3;
    zimadebar=(dekemvridebar+januaridebar+fevruaridebar)/3;
    cout<<"Prosecnata temperatura za prolet vo Debar e:"<<proletdebar<<endl;
    cout<<"Prosecnata temperatura za leto vo Debar e:"<<letodebar<<endl;
    cout<<"Prosecnata temperatura za esen vo Debar e:"<<esendebar<<endl;
    cout<<"Prosecnata temperatura za zima vo Debar e:"<<zimadebar<<endl;



    cout<<"Vnesi gi temperaturite za site godisni vreminja za Kumanovo"<<endl;
    cout<<"Prolet"<<endl;
    cin>>martkumanovo;
    cin>>aprilkumanovo;
    cin>>majkumanovo;
    cout<<"leto"<<endl;
    cin>>junikumanovo;
    cin>>julikumanovo;
    cin>>avgustkumanovo;
    cout<<"esen"<<endl;
    cin>>septemvrikumanovo;
    cin>>oktomvrikumanovo;
    cin>>noemvrikumanovo;
    cout<<"zima"<<endl;
    cin>>dekemvrikumanovo;
    cin>>januarikumanovo;
    cin>>fevruarikumanovo;

    proletkumanovo=(martkumanovo+aprilkumanovo+majkumanovo)/3;
    letokumanovo=(junikumanovo+julikumanovo+avgustkumanovo)/3;
    esenkumanovo=(septemvrikumanovo+oktomvrikumanovo+noemvrikumanovo)/3;
    zimakumanovo=(dekemvrikumanovo+januarikumanovo+fevruarikumanovo)/3;
    cout<<"Prosecnata temperatura za prolet vo Kumanovo e:"<<proletkumanovo<<endl;
    cout<<"Prosecnata temperatura za leto vo Kumanovo e:"<<letokumanovo<<endl;
    cout<<"Prosecnata temperatura za esen vo Kumanovo e:"<<esenkumanovo<<endl;
    cout<<"Prosecnata temperatura za zima vo Kumanovo e:"<<zimakumanovo<<endl;



    cout<<"Vnesi gi temperaturite za site godisni vreminja za Makedonski Brod"<<endl;
    cout<<"Prolet"<<endl;
    cin>>martbrod;
    cin>>aprilbrod;
    cin>>majbrod;
    cout<<"leto"<<endl;
    cin>>junibrod;
    cin>>julibrod;
    cin>>avgustbrod;
    cout<<"esen"<<endl;
    cin>>septemvribrod;
    cin>>oktomvribrod;
    cin>>noemvribrod;
    cout<<"zima"<<endl;
    cin>>dekemvribrod;
    cin>>januaribrod;
    cin>>fevruaribrod;

    proletbrod=(martbrod+aprilbrod+majbrod)/3;
    letobrod=(junibrod+julibrod+avgustbrod)/3;
    esenbrod=(septemvribrod+oktomvribrod+noemvribrod)/3;
    zimabrod=(dekemvribrod+januaribrod+fevruaribrod)/3;
    cout<<"Prosecnata temperatura za prolet vo Makedonski Brod e:"<<proletbrod<<endl;
    cout<<"Prosecnata temperatura za leto vo Makedonski Brod e:"<<letobrod<<endl;
    cout<<"Prosecnata temperatura za esen vo Makedonski Brod e:"<<esenbrod<<endl;
    cout<<"Prosecnata temperatura za zima vo Makedonski Brod e:"<<zimabrod<<endl;


    cout<<"Vnesi ja najvisokata prosecna temperatura od nekoj mesec i ke bidi sporedena so najvisokata prosecna temeperatura za gradovi!"<<endl;
    cin>>mesectemp;
    if(mesectemp>agpt)
    {
        cout<<"Najvisokata prosecna temperatura za eden mesec e pogolema od prosecnata temperatura za gradovite"<<endl;
    }
    if(mesectemp==agpt)
    {
        cout<<"Najvisokata prosecna temperatura za eden mesec e ednakva so prosecnata temperatura za gradovite"<<endl;
    }
    if(mesectemp<agpt)
    {
        cout<<"Najvisokata prosecna temperatura za eden mesec e pomala od prosecnata temperatura za gradovite"<<endl;
    }
    return 0;
}
