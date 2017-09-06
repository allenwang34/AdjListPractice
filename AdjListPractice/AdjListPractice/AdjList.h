#ifndef ADJLIST_H_
#define ADJLIST_H_
#include<vector>
#include<list>

typedef int ItemType;
class AdjList {
public:
	AdjList();
	void addAdjListVertex(ItemType value);
	void addAdjEdge(ItemType value, int index);


private:
	std::vector<std::list<ItemType>> m_adjList;
	int m_vertexNum;

};



#endif // ! ADJLIST_H_

