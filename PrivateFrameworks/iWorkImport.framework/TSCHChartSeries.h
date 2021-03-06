/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartSeries : NSObject <TSCHPropertyMapsGeneratedProtocol, TSCHStyleOwnerCollaborationSupport, TSCHStyleOwning, TSCHUnretainedParent> {
    TSUPointerKeyDictionary *mAxisTable;
    unsigned int mBarGapIndex;
    TSCHChartModel *mChartModel;
    TSCHErrorBarData *mErrorBarData;
    TSCHChartGridAdapter *mNameAdapter;
    <TSCHStyleActAlike> *mNonStyle;
    unsigned int mSeriesIndex;
    NSObject<TSCHUnretainedParent> *mSeriesStorage;
    TSCHChartSeriesType *mSeriesType;
    <TSCHStyleActAlike> *mStyle;
    BOOL mStyleIsPrivate;
    TSCHTrendLineData *mTrendLineData;
}

@property (nonatomic) unsigned int barGapIndex;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) TSCHErrorBarData *errorBarData;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) TSCHChartModel *model;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, readonly) unsigned int seriesIndex;
@property (nonatomic, readonly) NSObject<TSCHUnretainedParent> *seriesStorage;
@property (nonatomic) TSCHChartSeriesType *seriesType;
@property (nonatomic, readonly) BOOL showTrendLineLegendText;
@property (readonly) Class superclass;
@property (nonatomic, readonly) TSCHTrendLineData *trendLineData;
@property (nonatomic, readonly) NSString *trendLineLegendText;

+ (id)computableProperties;
+ (id)computedFillOrStroke:(id)arg1 forSeriesIndex:(unsigned int)arg2 numberOfThemeSeries:(unsigned int)arg3;
+ (id)defaultNumberFormat;
+ (id)stackedPercentageNumberFormat;
+ (unsigned char)styleOwnerPathType;

- (int)adjustedNumberFormatType;
- (id)axisForAxisType:(int)arg1;
- (id)axisIDForAxisType:(int)arg1;
- (id)axisTypesForValueLabelString;
- (unsigned int)barGapIndex;
- (id)chartInfo;
- (void)clearAxisIDs;
- (void)clearParent;
- (id)context;
- (id)customFormatForGridValueType:(int)arg1;
- (void)dealloc;
- (id)defaultProperties;
- (int)defaultPropertyForGeneric:(int)arg1;
- (id)drawableInfo;
- (float)effectiveLabelExplosion;
- (id)errorBarData;
- (BOOL)floatValueForLabelExplosion:(float*)arg1;
- (float)floatValueForProperty:(int)arg1 defaultValue:(float)arg2;
- (id)formattedValueLabelStringForValueIndex:(unsigned int)arg1;
- (id)g_genericToDefaultPropertyMap;
- (id)g_operationPropertyNameForGenericProperty:(int)arg1;
- (int)gridValueType;
- (BOOL)hasCustomFormatForGridValueType:(int)arg1;
- (BOOL)hasFloatValueForProperty:(int)arg1 value:(float*)arg2;
- (BOOL)hasIntValueForProperty:(int)arg1 value:(int*)arg2;
- (BOOL)hasObjectValueForProperty:(int)arg1 value:(id*)arg2;
- (id)initWithChartModel:(id)arg1 index:(unsigned int)arg2;
- (int)intValueForProperty:(int)arg1 defaultValue:(int)arg2;
- (void)invalidateCacheDataForSynchronization;
- (BOOL)isMultiData;
- (id)model;
- (void)modelSyncSetNonStyle:(id)arg1;
- (void)modelSyncSetStyle:(id)arg1;
- (unsigned int)multiDataSetIndex;
- (unsigned int)multiDataSetIndexForAxis:(id)arg1;
- (unsigned int)multiDataSetIndexForAxisID:(id)arg1;
- (id)multiDataValueEnumeratorForAxisID:(id)arg1;
- (id)name;
- (id)nonstyle;
- (unsigned int)numberOfValues;
- (id)objectValueForProperty:(int)arg1;
- (id)operationPropertyNameFromGenericProperty:(int)arg1;
- (id)p_axisStorageForType:(int)arg1 create:(BOOL)arg2;
- (void)p_generateComputedProperty:(int)arg1 objectValue:(id*)arg2 intValue:(int*)arg3 floatValue:(float*)arg4;
- (id)p_genericToDefaultPropertyMap;
- (id)p_representativeThemeSeries;
- (BOOL)p_seriesIndexWithinThemeStyleCount;
- (id)p_seriesNonStyleOrDefaultNonStyle;
- (BOOL)renderSeriesForClass:(Class)arg1;
- (void)resetSeriesStorage;
- (unsigned int)seriesIndex;
- (id)seriesStorage;
- (id)seriesType;
- (void)setAxisID:(id)arg1 forAxisType:(int)arg2;
- (void)setBarGapIndex:(unsigned int)arg1;
- (void)setGridAdapter:(id)arg1 forAxisType:(int)arg2;
- (void)setGridAdapterForName:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSeriesStorage:(id)arg1;
- (void)setSeriesType:(id)arg1;
- (void)setValue:(id)arg1 forAxisID:(id)arg2 index:(unsigned int)arg3;
- (BOOL)showTrendLineLegendText;
- (int)specificPropertyForGeneric:(int)arg1;
- (id)style;
- (id)swapTuplesForMutations:(id)arg1 forImport:(BOOL)arg2;
- (id)swapTuplesForParagraphStyleMutations:(id)arg1 forReferencingProperty:(int)arg2;
- (id)trendLineData;
- (id)trendLineLegendText;
- (id)valueForAxis:(id)arg1 index:(unsigned int)arg2;
- (id)valueForAxis:(id)arg1 index:(unsigned int)arg2 multiDataSetIndex:(unsigned int)arg3;
- (id)valueForAxisID:(id)arg1 index:(unsigned int)arg2;
- (id)valueForAxisID:(id)arg1 index:(unsigned int)arg2 multiDataSetIndex:(unsigned int)arg3;
- (id)valueForProperty:(int)arg1;
- (id*)valuesForAxis:(id)arg1 indexes:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id*)valuesForAxis:(id)arg1 indexes:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 multiDataSetIndex:(unsigned int)arg3;

@end
