#ifndef MARBLE_LIST_ITEM_H
#define MARBLE_LIST_ITEM_H

#include <QListWidgetItem>
#include "marble.h"

class marble_List_Item : public QListWidgetItem
{

public:
    marble_List_Item(marble *marble);

private:
    marble *nmarble;
};

#endif // MARBLE_LIST_ITEM_H
