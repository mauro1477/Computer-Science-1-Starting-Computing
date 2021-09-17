#ifndef CLIENT_HASH
#define CLIENT_HASH
#include <string>
using namespace std;

struct client//Client hash table to store client informaiton
{
    int count;
    int IDNumber;
    string name;
    string passWord;
    int passengerNum;
    string orgin;
    client* next;
};

class HashTable 
{
  public:
    HashTable(int hashTableSize);
    ~HashTable();
    void addClient(string cityIndex, string name, string password, string passengerNum, string orgin);
    bool isInTableName(string word);
    bool isInTablePassWord(string name, string passWord);
    void incrementCount(string word);
    int getNumCollisions();
    int getNumItems();
    int getTotalNumWords();
    void getClient(HashTable &clientTable);
    bool loginDisplay();



  private:
    /* member functions */
    unsigned int getHash(string word);
    client* searchTableName(string word);
    client* searchTablePassWord(string name, string passWord);

    /* instance variables */
    client** hashTable;
    int hashTableSize;
    int numCollisions;
    int numItems;
};


/* size to make your stopwords hash table */
const int CLIENT_TABLE_SIZE = 50;




#endif
