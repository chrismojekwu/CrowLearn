#include "crow_all.h"

int main()
{
    crow::SimpleApp app;

    CROW_ROUTE(app, "/")([](){
        auto page = crow::mustache::load_text("index.html");
        return page;
    });
     CROW_ROUTE(app, "/index.css")([](){
        auto stylesheet = crow::mustache::load_text("index.css");
        return stylesheet;
    });
    
     CROW_ROUTE(app, "/shapes")([](){
        auto page = crow::mustache::load_text("shapes.html");
        return page;
    });
     CROW_ROUTE(app, "/things")([](){
        auto page = crow::mustache::load_text("things.html");
        return page;
    });
     CROW_ROUTE(app, "/animals")([](){
        auto page = crow::mustache::load_text("animals.html");
        return page;
    });
    CROW_ROUTE(app, "/clothes")([](){
        auto page = crow::mustache::load_text("clothes.html");
        return page;
    });

    app.port(18080).multithreaded().run();
}