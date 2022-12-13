int adiff(int A , int B){
int C;
    A=A%360;
    B=B%360;
        if(A>B){
            C=A-B;
        }else{
            C=B-A;
        }
        if(C>180){
           return 360-C;
        }else{
        return C;
        }
}