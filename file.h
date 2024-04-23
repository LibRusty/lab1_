class File: QFile
{
  int size;
  bool exist;
public:
  int GetSize()
  bool GetExist()
  void SetExist()
};

class Manager
{
  vector<File*> list;
public:
  static Manager& Creator();
  void Tracking()
{
  for (auto x: list)
    {
      
    }
  
};
private:
  Manager(){}
  ~Manager(){}
}

class ILog
{
  virtual void 
}
