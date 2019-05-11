// TTNode.cpp
// Jon Caldwell
// Project 2: Tracking Tree


#include "TTnode.h"
#include <cstdlib>
#include <iostream>

using std::cout;
using std::hash;

char* gen_random(const int len);
string hasher(string in, hash<string> stHash);




//Constructor//

TTnode::TTnode(string raw)
{
	parentID = gen_random(8);
	rawEvent = raw;
	lHash = "null";
	rHash = "null";
	id = hasher(getParentID() + raw, hashTb);
	leftChild = NULL;
	rightChild = NULL;

}


//Get//


string TTnode::getID()
{
	return id;
}
string TTnode::getParentID()
{
	return parentID;
}
string TTnode::getRawEvent()
{
	return rawEvent;
}
string TTnode::getRHash()
{
	return rHash;
}
string TTnode::getLHash()
{
	return lHash;
}
vector<string> TTnode::getRHisth()
{
	return rHisth;
}
vector<string> TTnode::getLHisth()
{
	return lHisth;
}

TTnode* TTnode::getLeft()
{
	return leftChild;
}
TTnode* TTnode::getRight()
{
	return rightChild;
}

hash<string> TTnode::getHashTb()
{
	return hashTb;
}


//Set//


void TTnode::setLeft(TTnode* in)
{
	leftChild = in;
}
void TTnode::setRight(TTnode* in)
{
	rightChild = in;
}

void TTnode::setID(string in)
{
	id = in;
}
void TTnode::setParentID(string in)
{
	parentID = in;
}
void TTnode::setRawEvent(string in)
{
	rawEvent = in;
}
void TTnode::setRhash(string in)
{
	addRhisth(rHash);
	rHash = in;
}
void TTnode::setLhash(string in)
{
	addLhisth(lHash);
	lHash = in;
}
void TTnode::addRhisth(string in)
{
	rHisth.push_back(in);
}
void TTnode::addLhisth(string in)
{
	lHisth.push_back(in);
}


//Display//


