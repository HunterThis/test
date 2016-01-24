.c --> .i --> .s --> .o --> executable file 
preprocess --> compile --> assembly --> link

#define : macro in preprocess stage 
    e.g :
        #define add(a,b) (a+b)

        #define M int main(
        M){
            printf("hello,world\n");
        }
