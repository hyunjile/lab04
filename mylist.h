#ifndef MYLIST_H
#define MYLIST_H

const int defaultSize = 100;

template <typename T>
class MyList {
public: 
  MyList();
  ~MyList();
  void push_back(T val);
  T at(int loc) const;
  int size() const;

private:
  T* data_;
  int size_;
};

template <typename T>
MyList<T>::MyList()
{
  size_ = 0;
  data_ = new T [defaultSize];
}

template <typename T>
MyList<T>::~MyList()
{
  size_ = 0;
  delete [] data_;
}

template <typename T>
void MyList<T>::push_back(T val)
{
  data_[size_++] = val;
}

template <typename T>
T MyList<T>::at(int loc) const
{
  return data_[loc];
}

template <typename T>
int MyList<T>::size() const
{
  return size_;
}

#endif
