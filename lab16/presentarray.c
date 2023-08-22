int main()
{
    int i,item,m[20],pos=-1;
    printf("\nEnter Item:");
    scanf("%d",&item);
    for(i=0;i<20;i++)
{
    printf("\nEnter Data:");
    scanf("%d",&m[i]);
}
 for(i=0;i<20;i++)
{
     if(item==m[i])
{ 
    pos=i;
    break;
}
}
  if(pos==-1)
  printf("\nItem is not present");
  else
  printf("\nItem is present in position%d",pos);

    return 0;
}