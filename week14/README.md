## week14-1
```c
void setup(){
  size(300,200);
  float ans=random(60);
  textSize(30);
  text(ans,0,30);
}
```
## week14-2
```c
void setup(){
  size(300,200);
  textSize(30);
}
int ans=0;
void draw(){
  background(#2C9CF0);
  text(ans,30,30);
}
void mousePressed(){
  ans=(int)random(60);
}
```
## week14-3
```c
int []a={1,2,3,4,5,6,7,8,9,10};
void setup(){
  size(300,200);
  textSize(30);
}
void draw(){
  background(#2C9CF0);
  for(int i=0;i<10;i++){
    text(a[i],i*40,100);
  }
}
void mousePressed(){
  int i1=(int)random(10);
  int i2=(int)random(10);
  int temp=a[i1];a[i1]=a[i2];a[i2]=temp;
}
```
## week14-4
```c
int []a=new int[49];
void setup(){
  size(300,200);
  textSize(30);
  for(int i=0;i<49;i++)a[i]=i+1;
}
void draw(){
  background(#2C9CF0);
  for(int i=0;i<6;i++){
    text(a[i],i*50,100);
  }
}
void mousePressed(){
  for(int i=0;i<10000;i++){
    int i1=(int)random(49),i2=(int)random(49);
    int temp=a[i1];a[i1]=a[i2];a[i2]=temp;
  }
}
```
## week14-5
```c
int []a=new int[49];
void setup(){
  size(400,200);
  textSize(30);
  for(int i=0;i<49;i++)a[i]=i+1;
  for(int i=0;i<10000;i++){
    int i1=(int)random(49),i2=(int)random(49);
    int temp=a[i1];a[i1]=a[i2];a[i2]=temp;
  }
}
int N=0;
void draw(){
  background(#2C9CF0);
  for(int i=0;i<N;i++){
    fill(255);ellipse(50+i*50,100,40,40);
    textAlign(CENTER,CENTER);
    fill(0);
    text(a[i],50+i*50,100);
  }
}
void mousePressed(){
  N++;
}
```
