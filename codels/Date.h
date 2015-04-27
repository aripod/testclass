#ifndef __DATE_H__
#define __DATE_H__

class Date
{
private:
    int m_nMonth;
    int m_nDay;
    int m_nYear;

    int values[5];

    
 
public:
    Date(int nMonth, int nDay, int nYear);
    Date() {};
 
    void SetDate(int nMonth, int nDay, int nYear);
 
    int GetMonth() { return m_nMonth; }
    int GetDay()  { return m_nDay; }
    int GetYear() { return m_nYear; }
};
 
#endif
