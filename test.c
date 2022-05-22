#include "littlexml.h"
int main()
{
    XMLDocument doc;
    if (XMLDocument_load(&doc, "SAD.xml")) {
        XMLNode* anynode = XMLNode_child(doc.root, 3);
        printf("%s\n", anynode->attributes.data[2].value);

        XMLDocument_free(&doc);
    }

    return 0;
}