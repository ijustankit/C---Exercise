class student //new student class
{
public:                        //declared public here because by default its private
    long long int roll_number; //atributes of the class
private:
    int id = 224;

public:
    void function()
    {
        cout << roll_number << " " << id << endl;
    }
    int getid()
    {
        return id;
    }
    void setid(int a);
    {
        id =a;

    }
};