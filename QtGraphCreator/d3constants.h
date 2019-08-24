#ifndef D3CONSTANTS_H
#define D3CONSTANTS_H

#include <QString>

namespace GraphCreator
{
    namespace constants
    {

        class D3Constants
        {
        public:
            //contains the lines that need to be modified to generate the bar chart
            //This may not be the best way to go about this, but this is how I am going to do it for now
            enum scaling
            {
                ScaleLinear = 0,
                ScaleOrdinal,
                ScaleLog,
                ScaleSequential
            };

            //X and Y Scaling
            static const QString scaleLinear;
            static const QString scaleOrdinal;
            static const QString scaleLog;
            static const QString scaleSequential;

            //HTML File Stuff
            static std::string HtmlHeader;
            static std::string GenericHtmlBody;

            //JS
            static std::string canvasWidth;
            static std::string canvasHeight;

            static std::string svgCreation;
            static std::string xScaling;
            static std::string yScaling;

            static std::string genericCSVDataLoop;
            static std::string mapX;
            static std::string mapY;

            static std::string buildRects;
            static std::string setRectAttributes;
        };
    }
}

#endif // D3CONSTANTS_H
