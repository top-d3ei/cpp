class CMyString {
private:
    char* m_pszData;
    int m_Length;
public:
    CMyString();
    ~CMyString();

    int SetString(const char* pszParam);
    const char* GetString();
    void Release();
    void Print(const char* pszParam);
};