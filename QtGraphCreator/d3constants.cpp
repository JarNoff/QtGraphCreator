#include "d3constants.h"

using namespace GraphCreator::constants;

//X and Y Scaling options
const QString D3Constants::scaleLinear = "scaleLinear()";
const QString D3Constants::scaleOrdinal = "scaleOrdinal()";
const QString D3Constants::scaleLog = "scaleLog()";
const QString D3Constants::scaleSequential = "scaleSequential()";

std::string D3Constants::HtmlHeader = "<!doctype html>\n" \
                                        "<html>\n" \
                                        "<head>\n" \
                                            "\t<meta charset=\"utf-8\">\n" \
                                            "\t<meta name=\"description\" content=\"\">\n" \
                                            "\t<title>%1%</title>\n" \
                                            "\t<!-- Bootstrap -->\n" \
                                            "\t<link rel=\"stylesheet\" href=\"https://stackpath.bootstrapcdn.com/bootstrap/4.3.1/css/bootstrap.min.css\" integrity=\"sha384-ggOyR0iXCbMQv3Xipma34MD+dH/1fQ784/j6cY/iJTQUOhcWr7x9JvoRxT2MZw1T\" crossorigin=\"anonymous\">\n" \
                                        "</head>\n";

std::string D3Constants::GenericHtmlBody = "<body>\n\n" \
                                                "\t<!-- Bootstrap grid setup -->\n" \
                                                "\t<div class=\"container\">\n" \
                                                    "\t\t<div class=\"row\">\n" \
                                                        "\t\t\t<div id=\"chart-area\"></div>\n" \
                                                    "\t\t</div>\n" \
                                                "\t</div>\n" \
                                            "<!-- External JS libraries -->\n" \
                                            "<script src=\"https://d3js.org/d3.v3.min.js\"></script>\n"
                                            "<script src = \"%1%\"></script>\n";
std::string D3Constants::ScriptTag = "<script>\n";

//D3 JS code -> Probably shouldn't be const
std::string D3Constants::canvasMargin = "var margin = { left:%1%, right:%2%, top:%3%, bottom:%4% };\n";
std::string D3Constants::canvasWidth = "var canvasWidth = %1% - margin.left - margin.right;\n";
std::string D3Constants::canvasHeight = "var canvasHeight = %1% - margin.top - margin.bottom;\n";

std::string D3Constants::svgCreation = "var svgContainer = d3.select(\"#chart-area\").append(\"svg\").attr(\"width\", canvasWidth).attr(\"height\",canvasHeight);\n";
std::string D3Constants::xScaling = "var x = d3.%1%.range([0,canvasWidth]).padding(0.1);\n";
std::string D3Constants::yScaling = "var y = d3.%1%.range([canvasHeight, 0]);\n";

std::string D3Constants::genericCSVDataLoop = "d3.csv(%1%).then(function(data) {\n" \
                                            "\tconsole.log(data);\n" \
                                            "\tdata.forEach(function(d) {\n" \
                                                "\t\td.%2% = +d.%3%;\n" \
                                           "});\n ";
std::string D3Constants::mapX = "x.domain(data.map(function(d) { return d.%1%; }));\n";
std::string D3Constants::mapY = "y.domain([0, d3.max(data, function(d) { return d.%1%; } ) ])\n;";
std::string D3Constants::buildRects = "var rects = svgContainer.selectAll(\"rect\").data(data).enter().append(\"rect\");\n";
std::string D3Constants::setRectAttributes = "rects.attr(\"x\", function(d) { return x(d.%1%); })\n" \
                                              ".attr(\"y\", function(d) { return y(d.%2%); })\n" \
                                              ".attr(\"height\", function(d) { return d.%3%; })\n" \
                                              ".attr(\"width\", x.bandwidth())\n" \
                                              ".attr(\"fill\", \"%4%\");\n";
std::string D3Constants::closingBracket = "});";


