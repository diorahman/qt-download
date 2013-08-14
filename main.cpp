#include <QtCore/QCoreApplication>
#include <QStringList>
#include "download.h"

int main(int argc, char * argv[]){
  QCoreApplication app(argc, argv);
  QStringList arguments = app.arguments();
  arguments.takeFirst(); 

  if(arguments.isEmpty()){
    return 0;
  }

  Download download;
  download.append(arguments);
  
  return app.exec();
}