//---------------------------------------------------------------
//                   BASIC
//---------------------------------------------------------------

STRUCTURE : It is a derived data type.
            It is a collection of heterogenous type of data.

STRUCTURE TEMPLATE :
                    struct name(Structure name or structure tag)
                    {
                        data member of different type
                    }structure variable;

                    OR...
                    struct structure tag
                    {
                        data member of different type
                    };

EXAMPLE : 
         struct student
         {
            char name[20];
            int roll no;
            float a;
         }s,r,t,u;

STRUCTURE INITIALISATION :
                          struct student
                          {
                            char name[20];
                            int roll_no;
                          } s;