float sqrt(float c){
  float x = c;
  for(int i = 0; i < 100; i++){
    x = 0.5*(x + c/x);
  }
  return x;
}
