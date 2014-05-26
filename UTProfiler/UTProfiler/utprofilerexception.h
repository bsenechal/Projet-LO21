#ifndef UTPROFILEREXCEPTION_H
#define UTPROFILEREXCEPTION_H

#include <QString>
#include <QTextStream>

class UTProfilerException {
private:
    QString info;
    QString file;
    unsigned int line;

 public:
     UTProfilerException(const QString& message, const QString &f="na", unsigned int l=0):
         info(message),file(f),line(l){}
     QString getInfo() const { return info; }
 #ifndef NDEBUG
     // retourne le fichier dans lequel cettte exception a �t� lev�e.
     QString getFile() const { return file; }
     // retourne la ligne du fichier � laquelle cette exception a �t� lev�e.
     unsigned int getLine() const { return line; }
 #endif


};

#endif // UTPROFILEREXCEPTION_H
