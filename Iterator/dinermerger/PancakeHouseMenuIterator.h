#ifndef PANCAKE_HOUSE_MENU_ITERATOR_H
#define PANCAKE_HOUSE_MENU_ITERATOR_H

#include "Iterator.h"
#include "MenuItem.h"
#include <list>
#include <vector>

class PancakeHouseMenuIterator : public Iterator<MenuItem> {
	public:
		PancakeHouseMenuIterator(std::list<MenuItem> &i) :
			items(i), iter(items.begin()) { }
		MenuItem* next() override { return &*iter++; }
		bool hasNext() const override { return iter != items.cend(); }
	private:
		std::list<MenuItem> &items;
		std::list<MenuItem>::iterator iter;
};

#endif /* PANCAKE_HOUSE_MENU_ITERATOR_H */
