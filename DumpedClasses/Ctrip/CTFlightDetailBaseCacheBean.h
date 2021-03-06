//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTFlightPageCacheBean.h"

@class CTFlightFilterModel, CTFlightInlandOrderMiddleTipsModel, CTFlightOrderExtearnViewModel, CTFlightOrderModifyCacheViewModel, CTFlightOrderPaymentInfoViewModel, CTFlightOrderResultInfoViewModel, CTFlightOrderSkyRailWayTrainSegmentViewModel, CTFlightOrderViewModel, CTFlightPassengerPhoneDescViewModel, CTFlightPolicyInfoViewModel, CTFlightRepeatOrderViewModel, CTFlightSalePolicySettingViewModel, CTFlightSoldOutCheckResultInfoViewModel, CTFlightSubmitPositionViewModel, CTResponseEntity, DispatchImportContentModel, FlightCityModel, FlightDetailSearchV2Response, FlightInlandMiddleTagAreaDetailInformationModel, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, PriceType;

@interface CTFlightDetailBaseCacheBean : CTFlightPageCacheBean
{
    _Bool _isHuiXuanTicket;
    _Bool _isSoldOutChecked;
    _Bool _isTibetFlight;
    _Bool _isSelectTransferFlight;
    _Bool _isEditPassengerSwitchOpen;
    _Bool _isHighFlight;
    _Bool _isTransferType;
    _Bool _isNeedCardRisk;
    _Bool _isShowRebate;
    _Bool _isRealTimePay;
    _Bool _isWangFanDuoFan;
    _Bool _isFinalDeliveryServiceSuccess;
    _Bool _isRequestXHangTehui;
    _Bool _listNeedRecommendSort;
    _Bool _isNewCarPark;
    _Bool _enableFioH5;
    _Bool _modifyOrder;
    _Bool _isMiddlePageNewService;
    _Bool _isPassPersonCheck;
    _Bool _isNonePersonOrCivilServants;
    _Bool _hasShowChildrenBabyAlert;
    _Bool _isMiddlePagTowTab;
    _Bool _isAddChildBabyTicketBundlePrice;
    _Bool _isCombineStype;
    _Bool _packageShowInWebViewFlag;
    _Bool _hasCheckedAB4OrderWebViewCell;
    _Bool _isDeliveryTypeOn;
    _Bool _isGoToThirdPage;
    _Bool _backFromConfirmPage;
    _Bool _notUploadModifyParam;
    _Bool _showUseCarPopWindow;
    _Bool _hasCouponInConfirmView;
    _Bool _isPresentHotelCoupon;
    int _tripType;
    int _sort;
    int _resultType;
    int _channelType;
    int _listFilterFlightClass;
    int _flightRTCombineGoListFilterClass;
    int _highReturnAreaType;
    int _useBuyCouponCount;
    int _buyUseCarCouponCountFromH5;
    FlightCityModel *_departCity;
    FlightCityModel *_arriveCity;
    NSString *_departDate;
    NSString *_returnDate;
    FlightCityModel *_loaclCity;
    CTFlightOrderViewModel *_flightOrderViewModel;
    CTFlightOrderResultInfoViewModel *_flightOrderResultInfoModel;
    CTFlightSubmitPositionViewModel *_flightSubmitPositionModel;
    CTFlightOrderPaymentInfoViewModel *_flightOrderPaymentInfoModel;
    CTFlightFilterModel *_flightFilterModel;
    NSMutableArray *_airlinePassengerCardListGo;
    NSMutableArray *_airlinePassengerCardListReturn;
    CTFlightRepeatOrderViewModel *_repeatInfoModel;
    NSString *_checkCode;
    NSMutableArray *_invoiceDescList;
    NSDictionary *_flightOrderSummary;
    CTFlightPolicyInfoViewModel *_detailServesSuccessModel;
    CTFlightSalePolicySettingViewModel *_policyLimit;
    long long _listFlightSortType;
    long long _listCellIndex;
    NSString *_listPrice;
    NSMutableDictionary *_traceDictionary;
    NSMutableDictionary *_detailGoListClickTraceDict;
    NSString *_url;
    NSString *_callbackUrl;
    NSArray *_cartridgeList;
    NSArray *_flightTagList;
    DispatchImportContentModel *_finalDispatchImportContentModel;
    long long _deliveryServiceStatus;
    CTFlightSoldOutCheckResultInfoViewModel *_soldoutCheckedInfoModel;
    NSString *_rebateDesc;
    NSMutableArray *_fioPolicyList;
    NSString *_xProductConfigJson;
    PriceType *_flightListSelectedPrice;
    CTFlightInlandOrderMiddleTipsModel *_tipsModel;
    CTFlightOrderModifyCacheViewModel *_lastOrderInfoModel;
    NSMutableArray *_passengerNameCheckedList;
    NSString *_ticketTimeInfo;
    long long _orderFillViewType;
    long long _orderMiddleViewType;
    long long _payStatus;
    NSArray *_packageSallOutTypeList;
    NSArray *_notices;
    NSArray *_fillinNotices;
    NSMutableArray *_checkedErrorPassengerList;
    CTFlightOrderExtearnViewModel *_flightOrderFillExternModel;
    CTFlightOrderExtearnViewModel *_flightOrderMiddleExternModel;
    NSString *_whiteGoldContent;
    NSString *_filterReturnFlightNo;
    NSString *_listRequestProductID;
    NSMutableSet *_inforIdSet;
    long long _childrenBabyType;
    long long _fillinFirstScreenViewType;
    NSString *_memcacheKey;
    NSMutableArray *_flightClauseList;
    NSString *_rightTabTitle;
    NSArray *_segmentList;
    long long _currAB4OrderPageX;
    NSMutableArray *_deliveryNoteList;
    NSMutableArray *_calProductsOfOrderVC;
    NSString *_uuidChangeMessageToken;
    PriceType *_needExternInviceTitlePrice;
    NSString *_grabTicketContent;
    NSString *_fioData;
    FlightInlandMiddleTagAreaDetailInformationModel *_highReturnTagModel;
    CTFlightPolicyInfoViewModel *_highReturnPolicyModel;
    NSString *_createOrderInfo;
    NSString *_UseCarPopWindowContent;
    NSString *_policySupportString;
    NSString *_dingXiangPolicyMsg;
    NSString *_dingXiangPolicyPassengerMsg;
    long long _flightSkyRailWayType;
    CTFlightOrderSkyRailWayTrainSegmentViewModel *_trainSegmentModel;
    NSString *_flightSkyRailWayBuyRemark;
    FlightDetailSearchV2Response *_flightTrainRnResponse;
    CTResponseEntity *_flightTrainFailResponseEntity;
    NSString *_hotelCouponParam;
    CTFlightPassengerPhoneDescViewModel *_passengerPhoneDesc;
}

+ (long long)maxShowPassengerCount;
+ (void)cleanCommonPackageRecommendSwitchHistory:(id)arg1 packageTypePartKey:(id)arg2;
+ (id)getSaveInfo:(id)arg1 value:(id)arg2;
+ (id)getUID;
+ (void)cleanAllInsuranceRecommendSwitchHistory:(id)arg1 packageTypePartKey:(id)arg2;
+ (_Bool)isAllCloseInsurance;
+ (id)searchPagelastPackageRecommendTime;
+ (id)lastPackageRecommendTime;
+ (id)insurancePackageTypes;
+ (void)refershLastPackageRecommendTime;
+ (void)checkInsuranceRememberLatestTimeExpiration;
@property(retain, nonatomic) CTFlightPassengerPhoneDescViewModel *passengerPhoneDesc; // @synthesize passengerPhoneDesc=_passengerPhoneDesc;
@property(copy, nonatomic) NSString *hotelCouponParam; // @synthesize hotelCouponParam=_hotelCouponParam;
@property(nonatomic) _Bool isPresentHotelCoupon; // @synthesize isPresentHotelCoupon=_isPresentHotelCoupon;
@property(retain, nonatomic) CTResponseEntity *flightTrainFailResponseEntity; // @synthesize flightTrainFailResponseEntity=_flightTrainFailResponseEntity;
@property(retain, nonatomic) FlightDetailSearchV2Response *flightTrainRnResponse; // @synthesize flightTrainRnResponse=_flightTrainRnResponse;
@property(copy, nonatomic) NSString *flightSkyRailWayBuyRemark; // @synthesize flightSkyRailWayBuyRemark=_flightSkyRailWayBuyRemark;
@property(retain, nonatomic) CTFlightOrderSkyRailWayTrainSegmentViewModel *trainSegmentModel; // @synthesize trainSegmentModel=_trainSegmentModel;
@property(nonatomic) long long flightSkyRailWayType; // @synthesize flightSkyRailWayType=_flightSkyRailWayType;
@property(copy, nonatomic) NSString *dingXiangPolicyPassengerMsg; // @synthesize dingXiangPolicyPassengerMsg=_dingXiangPolicyPassengerMsg;
@property(copy, nonatomic) NSString *dingXiangPolicyMsg; // @synthesize dingXiangPolicyMsg=_dingXiangPolicyMsg;
@property(copy, nonatomic) NSString *policySupportString; // @synthesize policySupportString=_policySupportString;
@property(nonatomic) int buyUseCarCouponCountFromH5; // @synthesize buyUseCarCouponCountFromH5=_buyUseCarCouponCountFromH5;
@property(nonatomic) int useBuyCouponCount; // @synthesize useBuyCouponCount=_useBuyCouponCount;
@property(nonatomic) _Bool hasCouponInConfirmView; // @synthesize hasCouponInConfirmView=_hasCouponInConfirmView;
@property(retain, nonatomic) NSString *UseCarPopWindowContent; // @synthesize UseCarPopWindowContent=_UseCarPopWindowContent;
@property(nonatomic) _Bool showUseCarPopWindow; // @synthesize showUseCarPopWindow=_showUseCarPopWindow;
@property(nonatomic) _Bool notUploadModifyParam; // @synthesize notUploadModifyParam=_notUploadModifyParam;
@property(nonatomic) _Bool backFromConfirmPage; // @synthesize backFromConfirmPage=_backFromConfirmPage;
@property(retain, nonatomic) NSString *createOrderInfo; // @synthesize createOrderInfo=_createOrderInfo;
@property(retain, nonatomic) CTFlightPolicyInfoViewModel *highReturnPolicyModel; // @synthesize highReturnPolicyModel=_highReturnPolicyModel;
@property(nonatomic) int highReturnAreaType; // @synthesize highReturnAreaType=_highReturnAreaType;
@property(retain, nonatomic) FlightInlandMiddleTagAreaDetailInformationModel *highReturnTagModel; // @synthesize highReturnTagModel=_highReturnTagModel;
@property(retain, nonatomic) NSString *fioData; // @synthesize fioData=_fioData;
@property(copy, nonatomic) NSString *grabTicketContent; // @synthesize grabTicketContent=_grabTicketContent;
@property(retain, nonatomic) PriceType *needExternInviceTitlePrice; // @synthesize needExternInviceTitlePrice=_needExternInviceTitlePrice;
@property(nonatomic) _Bool isGoToThirdPage; // @synthesize isGoToThirdPage=_isGoToThirdPage;
@property(copy, nonatomic) NSString *uuidChangeMessageToken; // @synthesize uuidChangeMessageToken=_uuidChangeMessageToken;
@property(retain, nonatomic) NSMutableArray *calProductsOfOrderVC; // @synthesize calProductsOfOrderVC=_calProductsOfOrderVC;
@property(retain, nonatomic) NSMutableArray *deliveryNoteList; // @synthesize deliveryNoteList=_deliveryNoteList;
@property(nonatomic) _Bool isDeliveryTypeOn; // @synthesize isDeliveryTypeOn=_isDeliveryTypeOn;
@property(nonatomic) long long currAB4OrderPageX; // @synthesize currAB4OrderPageX=_currAB4OrderPageX;
@property(nonatomic) _Bool hasCheckedAB4OrderWebViewCell; // @synthesize hasCheckedAB4OrderWebViewCell=_hasCheckedAB4OrderWebViewCell;
@property(nonatomic) _Bool packageShowInWebViewFlag; // @synthesize packageShowInWebViewFlag=_packageShowInWebViewFlag;
@property(retain, nonatomic) NSArray *segmentList; // @synthesize segmentList=_segmentList;
@property(nonatomic) int flightRTCombineGoListFilterClass; // @synthesize flightRTCombineGoListFilterClass=_flightRTCombineGoListFilterClass;
@property(nonatomic) _Bool isCombineStype; // @synthesize isCombineStype=_isCombineStype;
@property(nonatomic) _Bool isAddChildBabyTicketBundlePrice; // @synthesize isAddChildBabyTicketBundlePrice=_isAddChildBabyTicketBundlePrice;
@property(copy, nonatomic) NSString *rightTabTitle; // @synthesize rightTabTitle=_rightTabTitle;
@property(nonatomic) _Bool isMiddlePagTowTab; // @synthesize isMiddlePagTowTab=_isMiddlePagTowTab;
@property(retain, nonatomic) NSMutableArray *flightClauseList; // @synthesize flightClauseList=_flightClauseList;
@property(copy, nonatomic) NSString *memcacheKey; // @synthesize memcacheKey=_memcacheKey;
@property(nonatomic) long long fillinFirstScreenViewType; // @synthesize fillinFirstScreenViewType=_fillinFirstScreenViewType;
@property(nonatomic) _Bool hasShowChildrenBabyAlert; // @synthesize hasShowChildrenBabyAlert=_hasShowChildrenBabyAlert;
@property(nonatomic) long long childrenBabyType; // @synthesize childrenBabyType=_childrenBabyType;
@property(retain, nonatomic) NSMutableSet *inforIdSet; // @synthesize inforIdSet=_inforIdSet;
@property(copy, nonatomic) NSString *listRequestProductID; // @synthesize listRequestProductID=_listRequestProductID;
@property(copy, nonatomic) NSString *filterReturnFlightNo; // @synthesize filterReturnFlightNo=_filterReturnFlightNo;
@property(copy, nonatomic) NSString *whiteGoldContent; // @synthesize whiteGoldContent=_whiteGoldContent;
@property(retain, nonatomic) CTFlightOrderExtearnViewModel *flightOrderMiddleExternModel; // @synthesize flightOrderMiddleExternModel=_flightOrderMiddleExternModel;
@property(retain, nonatomic) CTFlightOrderExtearnViewModel *flightOrderFillExternModel; // @synthesize flightOrderFillExternModel=_flightOrderFillExternModel;
@property(nonatomic) _Bool isNonePersonOrCivilServants; // @synthesize isNonePersonOrCivilServants=_isNonePersonOrCivilServants;
@property(retain, nonatomic) NSMutableArray *checkedErrorPassengerList; // @synthesize checkedErrorPassengerList=_checkedErrorPassengerList;
@property(nonatomic) _Bool isPassPersonCheck; // @synthesize isPassPersonCheck=_isPassPersonCheck;
@property(nonatomic) _Bool isMiddlePageNewService; // @synthesize isMiddlePageNewService=_isMiddlePageNewService;
@property(retain, nonatomic) NSArray *fillinNotices; // @synthesize fillinNotices=_fillinNotices;
@property(retain, nonatomic) NSArray *notices; // @synthesize notices=_notices;
@property(retain, nonatomic) NSArray *packageSallOutTypeList; // @synthesize packageSallOutTypeList=_packageSallOutTypeList;
@property(nonatomic) _Bool modifyOrder; // @synthesize modifyOrder=_modifyOrder;
@property(nonatomic) long long payStatus; // @synthesize payStatus=_payStatus;
@property(nonatomic) long long orderMiddleViewType; // @synthesize orderMiddleViewType=_orderMiddleViewType;
@property(nonatomic) long long orderFillViewType; // @synthesize orderFillViewType=_orderFillViewType;
@property(copy, nonatomic) NSString *ticketTimeInfo; // @synthesize ticketTimeInfo=_ticketTimeInfo;
@property(retain, nonatomic) NSMutableArray *passengerNameCheckedList; // @synthesize passengerNameCheckedList=_passengerNameCheckedList;
@property(retain, nonatomic) CTFlightOrderModifyCacheViewModel *lastOrderInfoModel; // @synthesize lastOrderInfoModel=_lastOrderInfoModel;
@property(nonatomic) _Bool enableFioH5; // @synthesize enableFioH5=_enableFioH5;
@property(retain) CTFlightInlandOrderMiddleTipsModel *tipsModel; // @synthesize tipsModel=_tipsModel;
@property(nonatomic) int listFilterFlightClass; // @synthesize listFilterFlightClass=_listFilterFlightClass;
@property(retain, nonatomic) PriceType *flightListSelectedPrice; // @synthesize flightListSelectedPrice=_flightListSelectedPrice;
@property(copy, nonatomic) NSString *xProductConfigJson; // @synthesize xProductConfigJson=_xProductConfigJson;
@property(nonatomic) _Bool isNewCarPark; // @synthesize isNewCarPark=_isNewCarPark;
@property(nonatomic) _Bool listNeedRecommendSort; // @synthesize listNeedRecommendSort=_listNeedRecommendSort;
@property(retain, nonatomic) NSMutableArray *fioPolicyList; // @synthesize fioPolicyList=_fioPolicyList;
@property(nonatomic) _Bool isRequestXHangTehui; // @synthesize isRequestXHangTehui=_isRequestXHangTehui;
@property(copy, nonatomic) NSString *rebateDesc; // @synthesize rebateDesc=_rebateDesc;
@property(retain, nonatomic) CTFlightSoldOutCheckResultInfoViewModel *soldoutCheckedInfoModel; // @synthesize soldoutCheckedInfoModel=_soldoutCheckedInfoModel;
@property long long deliveryServiceStatus; // @synthesize deliveryServiceStatus=_deliveryServiceStatus;
@property(retain, nonatomic) DispatchImportContentModel *finalDispatchImportContentModel; // @synthesize finalDispatchImportContentModel=_finalDispatchImportContentModel;
@property(nonatomic) _Bool isFinalDeliveryServiceSuccess; // @synthesize isFinalDeliveryServiceSuccess=_isFinalDeliveryServiceSuccess;
@property(retain, nonatomic) NSArray *flightTagList; // @synthesize flightTagList=_flightTagList;
@property(retain, nonatomic) NSArray *cartridgeList; // @synthesize cartridgeList=_cartridgeList;
@property(copy, nonatomic) NSString *callbackUrl; // @synthesize callbackUrl=_callbackUrl;
@property(nonatomic) int channelType; // @synthesize channelType=_channelType;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) _Bool isWangFanDuoFan; // @synthesize isWangFanDuoFan=_isWangFanDuoFan;
@property(nonatomic) _Bool isRealTimePay; // @synthesize isRealTimePay=_isRealTimePay;
@property(nonatomic) _Bool isShowRebate; // @synthesize isShowRebate=_isShowRebate;
@property(nonatomic) _Bool isNeedCardRisk; // @synthesize isNeedCardRisk=_isNeedCardRisk;
@property(nonatomic) _Bool isTransferType; // @synthesize isTransferType=_isTransferType;
@property(nonatomic) int resultType; // @synthesize resultType=_resultType;
@property(nonatomic) _Bool isHighFlight; // @synthesize isHighFlight=_isHighFlight;
@property(retain, nonatomic) NSMutableDictionary *detailGoListClickTraceDict; // @synthesize detailGoListClickTraceDict=_detailGoListClickTraceDict;
@property(retain, nonatomic) NSMutableDictionary *traceDictionary; // @synthesize traceDictionary=_traceDictionary;
@property(nonatomic) _Bool isEditPassengerSwitchOpen; // @synthesize isEditPassengerSwitchOpen=_isEditPassengerSwitchOpen;
@property(nonatomic) _Bool isSelectTransferFlight; // @synthesize isSelectTransferFlight=_isSelectTransferFlight;
@property(nonatomic) int sort; // @synthesize sort=_sort;
@property(retain, nonatomic) NSString *listPrice; // @synthesize listPrice=_listPrice;
@property(nonatomic) long long listCellIndex; // @synthesize listCellIndex=_listCellIndex;
@property(nonatomic) long long listFlightSortType; // @synthesize listFlightSortType=_listFlightSortType;
@property(retain, nonatomic) CTFlightSalePolicySettingViewModel *policyLimit; // @synthesize policyLimit=_policyLimit;
@property(retain, nonatomic) CTFlightPolicyInfoViewModel *detailServesSuccessModel; // @synthesize detailServesSuccessModel=_detailServesSuccessModel;
@property(retain, nonatomic) NSDictionary *flightOrderSummary; // @synthesize flightOrderSummary=_flightOrderSummary;
@property(retain, nonatomic) NSMutableArray *invoiceDescList; // @synthesize invoiceDescList=_invoiceDescList;
@property(nonatomic) _Bool isTibetFlight; // @synthesize isTibetFlight=_isTibetFlight;
@property(retain, nonatomic) NSString *checkCode; // @synthesize checkCode=_checkCode;
@property(nonatomic) _Bool isSoldOutChecked; // @synthesize isSoldOutChecked=_isSoldOutChecked;
@property(nonatomic) _Bool isHuiXuanTicket; // @synthesize isHuiXuanTicket=_isHuiXuanTicket;
@property(retain, nonatomic) CTFlightRepeatOrderViewModel *repeatInfoModel; // @synthesize repeatInfoModel=_repeatInfoModel;
@property(retain, nonatomic) NSMutableArray *airlinePassengerCardListReturn; // @synthesize airlinePassengerCardListReturn=_airlinePassengerCardListReturn;
@property(retain, nonatomic) NSMutableArray *airlinePassengerCardListGo; // @synthesize airlinePassengerCardListGo=_airlinePassengerCardListGo;
@property(retain, nonatomic) CTFlightFilterModel *flightFilterModel; // @synthesize flightFilterModel=_flightFilterModel;
@property(retain, nonatomic) CTFlightOrderPaymentInfoViewModel *flightOrderPaymentInfoModel; // @synthesize flightOrderPaymentInfoModel=_flightOrderPaymentInfoModel;
@property(retain, nonatomic) CTFlightSubmitPositionViewModel *flightSubmitPositionModel; // @synthesize flightSubmitPositionModel=_flightSubmitPositionModel;
@property(retain, nonatomic) CTFlightOrderResultInfoViewModel *flightOrderResultInfoModel; // @synthesize flightOrderResultInfoModel=_flightOrderResultInfoModel;
@property(retain, nonatomic) CTFlightOrderViewModel *flightOrderViewModel; // @synthesize flightOrderViewModel=_flightOrderViewModel;
@property(retain, nonatomic) FlightCityModel *loaclCity; // @synthesize loaclCity=_loaclCity;
@property(copy, nonatomic) NSString *returnDate; // @synthesize returnDate=_returnDate;
@property(copy, nonatomic) NSString *departDate; // @synthesize departDate=_departDate;
@property(retain, nonatomic) FlightCityModel *arriveCity; // @synthesize arriveCity=_arriveCity;
@property(retain, nonatomic) FlightCityModel *departCity; // @synthesize departCity=_departCity;
@property(nonatomic) int tripType; // @synthesize tripType=_tripType;
- (void).cxx_destruct;
- (id)getCityModelWithDic:(id)arg1;
- (id)getObjectWithJsonStr:(id)arg1;
- (void)setFlightTrainOrderRnDataWith:(id)arg1;
- (_Bool)showInvoiceTitleByCheckValue;
- (double)calculateXProductPriceForInvoice;
- (_Bool)checkVersion;
- (_Bool)packageShowInWebView;
- (id)getFlightBundleModelSelectPackageStrListWithPolicyModel:(id)arg1 returnPolicyModel:(id)arg2;
- (id)getFlightAllSelectPackageStrList;
- (long long)getFlightChangeClassMaxTicketQuantity:(_Bool)arg1;
- (id)getFlightTicketSeatCount;
- (long long)getFlightMaxTicketQuantity:(_Bool)arg1;
- (_Bool)canEditPassangerInland;
- (id)getFlightFillPageReturnSegmentList;
- (id)getFlightMiddleReturnPageSegmentList;
- (id)getFlightFillPageGoSegmentList;
- (id)getFlightMiddleGoPageSegmentList;
- (id)getFlightFillPageReturnUsePolicyModel;
- (id)getFlightFillPageGoUsePolicyModel;
- (id)getFlightMiddleReturnPageSelectModel;
- (id)getFlightMiddleGoPageSelectModel;
- (void)addOrderInfoToOrderConfirmWith:(id)arg1 content:(id)arg2 containArray:(id)arg3;
- (_Bool)isBuyDelayInsurance;
- (_Bool)useNewCaseToEditPassengers;
- (int)getCouponAmount:(id)arg1;
- (id)getCouponInfoModel:(id)arg1 selectedReturnPolicyModel:(id)arg2;
- (void)saveGlobeAddress:(id)arg1;
- (void)saveCommonPackageListRecommendSwitchWithHistory:(id)arg1 packageTypePartKey:(id)arg2;
- (void)saveCommonPackageRecommendSwitchWithHistory:(id)arg1 packageTypePartKey:(id)arg2;
- (_Bool)isShowInvoiceTitle;
- (void)setupDefaultInvoiceSelectType;
- (void)setupMergeDeliveryDefault;
- (void)setDeliveryMoiblePhone;
- (_Bool)isLastReceiptNeedOpen;
- (void)setDeliverySelectedStatus;
- (void)getInlandLastDispatchModel:(id)arg1;
- (void)saveInlandLastDispatchModelToRecord;
- (id)getAllRecordDataFromDB;
- (id)getAllRecordData;
- (void)save:(id)arg1 nextCacheBean:(id)arg2;
- (void)initData;
- (id)init;

@end

