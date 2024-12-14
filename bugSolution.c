int main() {
  int x = 10;
  int *ptr = &x; 
  *ptr = 20;  //This line correctly modifies the value through the pointer
  printf("%d", x); //This will correctly print 20 
  return 0; 
}
//The bug is resolved by explicitly modifying the value pointed to by the pointer using the dereference operator(*) which changes the value of the original variable x