#include <vector>
#include <list>
#include "AdjList.h"

AdjList::AdjList() { m_vertexNum = 0; }
void AdjList::addAdjListVertex(ItemType value) {
	std::list<ItemType> newList;
	newList.push_back(value);
	m_adjList.push_back(newList);
	m_vertexNum++;
}


void AdjList::addAdjEdge(ItemType value, int index) {
	m_adjList[index].push_back(value);
}