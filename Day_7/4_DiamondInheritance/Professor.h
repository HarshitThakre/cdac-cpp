#pragma once
#include"Trainer.h"
#include"Researcher.h"


class Professor :public Trainer, public Researcher
{
private:
	int prof_id;
public:
	Professor(int prof_id, int trainer_id, int rid, string name)
		:Person(name),Trainer(trainer_id,name),Researcher(rid,name)
	{
		this->prof_id = prof_id;
	}
	void conductSession()
	{
		cout << "\n professor is conduction session";
	}
	void displaydetails()
	{
		cout << "\n in Professor class";
		Person::displaydetails();
	}

};
