#include "HelpfulItem.h"
#include "Character.h"
#include "Utility.h"

void HelpfulItem::use(Character* character)
{
    useHelpfulItem(character, this);
}
