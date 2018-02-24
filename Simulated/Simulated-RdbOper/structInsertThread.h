#ifndef STRUCTINSERTTHREAD_H
#define STRUCTINSERTTHREAD_H

#include <QtCore/QtCore>
#include <string>
#include <vector>

#include "rdbdata.h"

using namespace RdbRealData;
using namespace std;

class DataStruct;
typedef QList<DataStruct>	DataStructList;

#define RDB						"rdb"
#define GlobalParam				"GlobalParam"
#define AnalogSuffix			"AnalogSuffix"
#define DiscreteSuffix			"DiscreteSuffix"
#define CommandSuffix			"CommandSuffix"
#define AccumulatorSuffix		"AccumulatorSuffix"
#define VALUE					"value"
#define DevManufacturer			"DevManufacturer"
#define DevDeviceType			"DevDeviceType"
#define GeographicalRegion		"GeographicalRegion"
#define SubGeographicalRegion	"SubGeographicalRegion"
#define Area					"Area"
#define Substation				"Substation"
#define RemoteUnit				"RemoteUnit"
#define AnalogUnitPoint			"AnalogUnitPoint"
#define DiscreteUnitPoint		"DiscreteUnitPoint"
#define ControlUnitPoint		"ControlUnitPoint"
#define AccumulatorUnitPoint	"AccumulatorUnitPoint"
#define BusbarSection			"BusbarSection"
#define Line					"Line"
#define Breaker					"Breaker"
#define Disconnector			"Disconnector"
#define PowerTransformer		"PowerTransformer"
#define TransformerWinding		"TransformerWinding"
#define Analog					"Analog"
#define Discrete				"Discrete"
#define Command					"Command"
#define Accumulator				"Accumulator"

class DataStruct
{
public:
	DataStruct();

	// ��ȡָ���ĺ�����Ϣ
	DataStructList	getSpecificChildrens(QString name) const;

	// ��ȡָ����������Ϣ
	QString	getSepecificAttribute(QString key) const;

	// �޸�������Ϣ
	void modifyAttribute(QString key, QString value);

	// ��ȡ�ֶ�ֵ
	void getFieldValues(vector<string>& fieldValues) const;

	// ���Ӻ���
	void appendChildren(const DataStruct& children);

public:
	QString	name;
	QString	value;
	QMap<QString, QString>	attributes;
	DataStructList	childrens;
};

class StructInsertThread : public QThread
{
	Q_OBJECT

public:
	StructInsertThread(const RdbDataOptPrx& rdbDataOptPrx, QObject* parent = 0);

protected:
	virtual void run();

private:
	bool loadRdbDataStruct();

	bool insertDevManufacturer();

	bool insertDeviceType(const DataStruct& devManufacturer);

	bool insertGeographicalRegion();

	bool insertSubGeographicalRegion(const DataStruct& parent);

	bool insertArea(const DataStruct& parent);

	bool insertSubstation(const DataStruct& parent);

	bool insertRemoteUnit(const DataStruct& parent);

	bool insertBusbarSection(const DataStruct& parent);

	bool insertLine(const DataStruct& parent);

	bool insertBreaker(const DataStruct& parent);

	bool insertDisconnector(const DataStruct& parent);

	bool insertPowerTransformer(const DataStruct& parent);

	bool insertTransformerWinding(const DataStruct& parent);

	bool insertAnalogUnitPoint(const DataStruct& parent);

	bool insertDiscreteUnitPoint(const DataStruct& parent);

	bool insertControlUnitPoint(const DataStruct& parent);

	bool insertAccumulatorUnitPoint(const DataStruct& parent);

	bool insertAnalog(const DataStruct& parent);

	bool insertDiscrete(const DataStruct& parent);

	bool insertCommand(const DataStruct& parent);

	bool insertAccumulator(const DataStruct& parent);

	bool insertRdbData(const QString& tableName, const vector<string>& fieldValues);

	void getRandomDeviceTypeInfo(QString& manufacturer, QString& deviceType);

	QStringList getAnalogSuffix();

	QStringList getDiscreteSuffix();

	QStringList getCommandSuffix();

	QStringList getAccumulatorSuffix();


	void createNewUnitId();
	QString getUnitId();
	QString getYcPointId();
	QString getYxPointId();
	QString getYkPointId();
	QString getDdPointId();
private:
	DataStruct	rdbDataStruct;

	DataStructList	deviceTypeDataStructs;

	RdbDataOptPrx	m_rdbDataOptPrx;

	int	unitId;
	int ycPointId;
	int yxPointId;
	int ykPointId;
	int ddPointId;
};
#endif