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
            static const QString HtmlHeader;
            static const QString GenericHtmlBody;

            //JS
            static QString canvasWidth;
            static QString canvasHeight;

            static QString svgCreation;
            static QString xScaling;
            static QString yScaling;

            static QString genericCSVDataLoop;
            static QString mapX;
            static QString mapY;

            static QString buildRects;
            static QString setRectAttributes;
        };
    }
}

#endif // D3CONSTANTS_H
