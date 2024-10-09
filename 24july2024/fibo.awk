BEGIN{f1=0;f2=1;}
{
print(f1);
print(f2);
for(i = 3;i<=10;i++){
f3=f1+f2;
print(f3);
f1=f2;
f2=f3;
}
}
