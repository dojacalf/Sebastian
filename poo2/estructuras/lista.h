class lista{
    private:
node *pri;
node *ult;
    public:
lista(){
    pri = ult = nullptr;
}
void insertinicio(int val){
    node* temp = new node(val);
    if(pri == nullptr){
        pri = ult = temp;
    } else{
        temp->setnext(pri);
        pri = temp;
    }
}
void insertfinal(int val){
    node* temp = new node(val);
    if(pri == nullptr){
        pri = ult = temp;
    }else{
        ult->setnext(temp);
        ult = temp;
    }
}



};