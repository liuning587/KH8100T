#ifndef RDBTABLE_H
#define RDBTABLE_H

#include "fastdb.h"

#include <string>
#include <QtCore/QtCore>

using namespace std;

class BaseTable
{
public:
	BaseTable(dbDatabase* dbPtr);

	QStringList getTableFieldNames(const string& tableName);

	virtual	bool	insertData() = 0;
	virtual bool	deleteData(const string& mRID) = 0;
	virtual bool	updateDatas(const string& mRID, const QMap<QString,QString>& values) = 0;
	virtual QList<QStringList>	selectDatas() = 0;
	virtual void	getHidedColumns(QList<int>& hideColumns) = 0;
	
protected:
	bool	deleteDataByCursor(dbAnyCursor& cursor, const string& mRID);
	bool	updateDataByCursor(dbAnyCursor& cursor, const string& mRID, const QMap<QString,QString>& values);
	virtual	void setFieldValue(dbAnyCursor& anyCursor, const string& field, const string& value){}
	
public:
	dbDatabase* m_dbPtr;
};

class RemoteUnitTable : public BaseTable
{
public:
	RemoteUnitTable(dbDatabase* dbPtr);

	virtual QList<QStringList>	selectDatas();
	virtual bool insertData();
	virtual bool deleteData(const string& mRID);
	virtual bool updateDatas(const string& mRID, const QMap<QString,QString>& values);
	virtual void getHidedColumns(QList<int>& hideColumns);

protected:
	virtual	void setFieldValue(dbAnyCursor& anyCursor, const string& fieldName, const string& value);
};

class AnalogUnitPointTable : public BaseTable
{
public:
	AnalogUnitPointTable(dbDatabase* dbPtr);

	virtual QList<QStringList>	selectDatas();
	virtual bool insertData();
	virtual bool deleteData(const string& mRID);
	virtual bool updateDatas(const string& mRID, const QMap<QString,QString>& values);
	virtual void getHidedColumns(QList<int>& hideColumns);

protected:
	virtual	void setFieldValue(dbAnyCursor& anyCursor, const string& fieldName, const string& value);
};

class DiscreteUnitPointTable : public BaseTable
{
public:
	DiscreteUnitPointTable(dbDatabase* dbPtr);

	virtual QList<QStringList>	selectDatas();
	virtual bool insertData();
	virtual bool deleteData(const string& mRID);
	virtual bool updateDatas(const string& mRID, const QMap<QString,QString>& values);
	virtual void getHidedColumns(QList<int>& hideColumns);

protected:
	virtual	void setFieldValue(dbAnyCursor& anyCursor, const string& fieldName, const string& value);
};

class ControlUnitPointTable : public BaseTable
{
public:
	ControlUnitPointTable(dbDatabase* dbPtr);

	virtual QList<QStringList>	selectDatas();
	virtual bool insertData();
	virtual bool deleteData(const string& mRID);
	virtual bool updateDatas(const string& mRID, const QMap<QString,QString>& values);
	virtual void getHidedColumns(QList<int>& hideColumns);

protected:
	virtual	void setFieldValue(dbAnyCursor& anyCursor, const string& fieldName, const string& value);
};

class SubstationTable : public BaseTable
{
public:
	SubstationTable(dbDatabase* dbPtr);

	virtual QList<QStringList>	selectDatas();
	virtual bool insertData();
	virtual bool deleteData(const string& mRID);
	virtual bool updateDatas(const string& mRID, const QMap<QString,QString>& values);
	virtual void getHidedColumns(QList<int>& hideColumns);

protected:
	virtual	void setFieldValue(dbAnyCursor& anyCursor, const string& fieldName, const string& value);
};

class VoltageLevelTable : public BaseTable
{
public:
	VoltageLevelTable(dbDatabase* dbPtr);

	virtual QList<QStringList>	selectDatas();
	virtual bool insertData();
	virtual bool deleteData(const string& mRID);
	virtual bool updateDatas(const string& mRID, const QMap<QString,QString>& values);
	virtual void getHidedColumns(QList<int>& hideColumns);

protected:
	virtual	void setFieldValue(dbAnyCursor& anyCursor, const string& fieldName, const string& value);
};

class AnalogTable : public BaseTable
{
public:
	AnalogTable(dbDatabase* dbPtr);

	virtual QList<QStringList>	selectDatas();
	virtual bool insertData();
	virtual bool deleteData(const string& mRID);
	virtual bool updateDatas(const string& mRID, const QMap<QString,QString>& values);
	virtual void getHidedColumns(QList<int>& hideColumns);

protected:
	virtual	void setFieldValue(dbAnyCursor& anyCursor, const string& fieldName, const string& value);
};

class DiscreteTable : public BaseTable
{
public:
	DiscreteTable(dbDatabase* dbPtr);

	virtual QList<QStringList>	selectDatas();
	virtual bool insertData();
	virtual bool deleteData(const string& mRID);
	virtual bool updateDatas(const string& mRID, const QMap<QString,QString>& values);
	virtual void getHidedColumns(QList<int>& hideColumns);

protected:
	virtual	void setFieldValue(dbAnyCursor& anyCursor, const string& fieldName, const string& value);
};

class AccumulatorTable : public BaseTable
{
public:
	AccumulatorTable(dbDatabase* dbPtr);

	virtual QList<QStringList>	selectDatas();
	virtual bool insertData();
	virtual bool deleteData(const string& mRID);
	virtual bool updateDatas(const string& mRID, const QMap<QString,QString>& values);
	virtual void getHidedColumns(QList<int>& hideColumns);

protected:
	virtual	void setFieldValue(dbAnyCursor& anyCursor, const string& fieldName, const string& value);
};
#endif