#include "Serialisation.hpp"

int main()
{
    Data            ok;
    uintptr_t       oui;
    Data            *data;

    ok.hello = "HELLO WORLD";
    ok.world = 12;

    oui = serialize(&ok);
	data = deserialize(oui);

	cout << "Hello : " << data->hello << endl;
	cout << "World : " << data->world << endl;
}