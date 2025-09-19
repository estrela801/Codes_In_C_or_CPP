#include <iostream>

using namespace std;

void setupMessages(crow::SimpleApp& app)
{
    CROW_ROUTE(app, "/receive")([]()
{
    
})
}