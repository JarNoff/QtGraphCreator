#include "d3constants.h"

//X and Y Scaling options
const QString D3Constants::scaleLinear = "Scale Linear";
const QString D3Constants::scaleOrdinal = "Scale Ordinal";
const QString D3Constants::scaleLog = "Scale Log";
const QString D3Constants::scaleSequential = "Scale Sequential";

const QString D3Constants::HtmlHeader = "<!doctype html>\n" \
                                        "<html>\n" \
                                        "<head>\n" \
                                            "\t<meta charset=\"utf-8\">\n" \
                                            "\t<meta name=\"description\" content=\"\">\n" \
                                            "\t<title>Title</title>\n" \
                                            "\t<!-- Bootstrap -->\n" \
                                            "\t<link rel=\"stylesheet\" href=\"https://stackpath.bootstrapcdn.com/bootstrap/4.3.1/css/bootstrap.min.css\" integrity=\"sha384-ggOyR0iXCbMQv3Xipma34MD+dH/1fQ784/j6cY/iJTQUOhcWr7x9JvoRxT2MZw1T\" crossorigin=\"anonymous\">\n" \
                                        "<head>\n";

const QString D3Constants::GenericHtmlBody = "<body>\n\n" \
                                                "\t<!-- Bootstrap grid setup -->\n" \
                                                "\t<div class=\"container\">\n" \
                                                    "\t\t<div class=\"row\">\n" \
                                                        "\t\t\t<div id=\"chart-area\"></div>\n" \
                                                    "\t\t</div>\n" \
                                                "\t</div>\n" \
                                            "<!-- External JS libraries -->\n" \
                                            "<script src=\"https://d3js.org/d3.v3.min.js\"></script>\n" \
                                            "</body>\n" \
                                            "</html>\n";
