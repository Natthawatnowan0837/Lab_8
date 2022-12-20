//ไม่ต้องเติม function main()

char before(char x){
    char result ;
    if(x == 'A'){
        result = 'Z';
        return result;
    }if(int(x)<65 || int(x)>90){
        result = '0' ;
        return result ;
    }else{
        result = x-1;
        return result;
    }
    
    
}