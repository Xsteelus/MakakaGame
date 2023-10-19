#include <iostream>

using namespace std;

int main()
{
	int a;
	cout << "vi shli po gungliam i vstretili obezianu v kletke" << endl
		 << "1-pomoch ei" << endl
		 << "2-posmeiatsa" << endl;
	cin >> a;
	if (a == 2)
	{
		cout << endl
			 << "obeziana razozlilas stala silnoi i ubila vas" << endl;
		return 0;
	}
	else
	{
		cout << endl
			 << "ona obradovalas" << endl;
	}

	cout << "ona poprosila vas vziat kluch iz kustov" << endl
		 << "1-naiti kluchi" << endl
		 << "2-zabrat u nee banan" << endl;
	cin >> a;
	if (a == 2)
	{
		cout << endl
			 << "obeziana razozlilas pozvala druzei i oni ubili vas" << endl;
		return 0;
	}
	else
	{
		cout << endl
			 << "k sozhaleniu vi ne nashli kluchei" << endl;
	}

	cout << "vi podumali chto ona mozhet stat silnee chtobi slomat kletku" << endl
		 << "1-povtorat slova matiucia dolzhna bit vsegdaaa" << endl
		 << "2-uiti v otchaianii" << endl;
	cin >> a;
	if (a == 2)
	{
		cout << endl
			 << "obeziana sgrusnula, obidelas i razozlilas. ona stala silnoi slomala kletku i ubila vas" << endl;
		return 0;
	}
	else
	{
		cout << endl
			 << "pozdravliau! vi podniali ei motivaciu, ona stala silnoi i slomala kletku " << endl
			 << "ona uspokolas i vernulas v svou obichnuu stadiu" << endl;
	}

	cout << "obeziana otblagodarila vas" << endl
		 << "ona sprosila vas hocheteli vi stat ee drugom" << endl
		 << "1-da, konechno!" << endl
		 << "2-net. zabrat u nee banan" << endl;
	cin >> a;
	if (a == 2)
	{
		cout << endl
			 << "ona obidelas! obeziana pozvala svoih druzei i oni vas ubili :0" << endl;
		return 0;
	}
	else
	{
		cout << endl
			 << "ona ulibnulas" << endl;
	}

	cout << "sprosit ee imia?" << endl
		 << "1-da!" << endl
		 << "2-zabrat u nee vse banani i ubezhat" << endl;
	cin >> a;
	if (a == 2)
	{
		cout << endl
			 << "ona razozlilas! obeziana vas ubila :0" << endl;
		return 0;
	}
	else
	{
		cout << endl
			 << "ona skazala chto ee zovut Migel" << endl;
	}

	cout << "Migel sprosil vashe imia" << endl
		 << "1-skazat svoe imia" << endl
		 << "2-smeiatsa s imeni Migel" << endl;
	cin >> a;
	if (a == 2)
	{
		cout << endl
			 << "Migel zol! On vas ubil" << endl;
		return 0;
	}

	cout << "(pridumai sebe imia)" << endl;
	string yourname;
	cin >> yourname;
	cout << endl
		 << "menya zqovut " << yourname << endl;

	cout << "Migel rad chto vi teper druzia" << endl
		 << "1-skazat chto ti tozhe rad" << endl
		 << "2-skazat chto Migel kaka" << endl;
	cin >> a;
	if (a == 2)
	{
		cout << endl
			 << "Migel obidelsia i skazal svoim druziam ubit " << yourname << endl;
		return 0;
	}
	else
	{
		cout << endl
			 << "Migel hochet sdelat dlia vas surpriz" << endl;
	}

	cout << "Migel skazal chto hochet privesti v svoi lager" << endl
		 << "1-idti s Migelem" << endl
		 << "2-skazat chto tebe pora idti domoi"<< endl;
			cin >>
		a;
	if (a == 2)
	{
		cout << endl
			 << "Migel obidelsia i skazal chto ego luchshii drug eto " << yourname << endl
			 << "GAME OVER bad end.";
		return 0;
	}
	else
	{
		cout << endl
			 << "Migel povel vas v svoi lager" << endl;
	}

	cout << "Migel privel vas k lageru" << endl
		 << "1-prodolzhenie sleduet..." << endl;
	cin >> a;
	if (a == 1)
	{
		cout << endl
			 <<"made by Andr and Vanomax" << endl;
		return 0;
	}
	return 0;
}
