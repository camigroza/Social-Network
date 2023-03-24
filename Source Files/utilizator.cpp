#include "utilizator.h"
#include <iostream>
using namespace std;

Utilizator::Utilizator()
{
	this->id = -1;
	this->nume = "";
	this->varsta = 0;
	this->oras = "";
}

Utilizator::Utilizator(int id_, string nume_, int varsta_, string oras_)
{
	this->id = id_;
	this->nume = nume_;
	this->varsta = varsta_;
	this->oras = oras_;
}

Utilizator::Utilizator(const Utilizator& other)
{
	this->id = other.id;
	this->nume = other.nume;
	this->varsta = other.varsta;
	this->oras = other.oras;
}

void Utilizator::setId(int id_)
{
	this->id = id_;
}

void Utilizator::setNume(string nume_)
{
	this->nume = nume_;
}

void Utilizator::setVarsta(int varsta_)
{
	this->varsta = varsta_;
}

void Utilizator::setOras(string oras_)
{
	this->oras = oras_;
}

int Utilizator::getId()
{
	return this->id;
}

string Utilizator::getNume()
{
	return this->nume;
}

int Utilizator::getVarsta()
{
	return this->varsta;
}

string Utilizator::getOras()
{
	return this->oras;
}

Utilizator& Utilizator::operator=(const Utilizator& other)
{
	if (this != &other)
	{
		this->id = other.id;
		this->nume = other.nume;
		this->varsta = other.varsta;
		this->oras = other.oras;
	}
	return *this;
}

bool Utilizator::operator==(const Utilizator& other)
{
	return this->id == other.id && this->nume == other.nume 
		&& this->varsta == other.varsta && this->oras == other.oras;
}

bool Utilizator::operator>(const Utilizator& other)
{
	return this->nume > other.nume;
}

bool Utilizator::operator<(const Utilizator& other)
{
	return this->nume < other.nume;
}

ostream& operator<<(ostream& os, const Utilizator& u)
{
	os << "Id: " << u.id << "; Nume: " << u.nume << "; Varsta: " << u.varsta << "; Oras: " << u.oras;
	return os;
}

istream& operator>>(istream& is, Utilizator& u)
{
	cout << " Dati id-ul: ";
	int id;
	is >> id;
	cin.get();
	cout << " Dati numele: ";
	string nume;
	getline(is, nume);
	cout << " Dati varsta: ";
	int varsta;
	is >> varsta;
	cin.get();
	cout << " Dati orasul: ";
	string oras;
	getline(is, oras);
	u.setId(id);
	u.setNume(nume);
	u.setVarsta(varsta);
	u.setOras(oras);
	return is;
}
