
int random(int maximum);
int random (int maximum)
{
    return 1 + rand() % maximum;
}

int main()
{
     int guess = 0;

    srand(static_cast<unsigned>(time(nullptr)));
   int secret = (1 + rand() % (10 - 1 + 1));

    cout << secret << endl;
    int myguess = 0;
    cout << "I am thinking of a number from 1 to 10." << endl;
    cout << What is your guess? << endl;
    cin >> myguess;
    while(myguess != secret)
    {
         if (myguess == secret)
        {   cout << "yeahh you are correct" << endl;
        }
        else
        {
        cout << "eish - not this time" << endl;
        }

    }



}
