﻿#ifndef _UFT4_APIDATATYPE_H_
#define _UFT4_APIDATATYPE_H_

//交易所类型
//上期所
#define EXCHANGE_TYPE_SHFE	'S'
//郑商所
#define EXCHANGE_TYPE_CZCE	'Z'
//大商所
#define EXCHANGE_TYPE_DCE		'D'
//中金所
#define EXCHANGE_TYPE_CFFEX	'J'
//上海能源交易中心
#define EXCHANGE_TYPE_SHETC	'N'

//上海证券交易所 期权
#define EXCHANGE_TYPE_SSEOPT	'H'
//上海证券交易所
#define EXCHANGE_TYPE_SSE		'1'
//深圳证券交易所
#define EXCHANGE_TYPE_SZSE	'2'




typedef unsigned char     T_UFT_BYTE;
typedef unsigned short    T_UFT_WORD;
typedef unsigned long     T_UFT_DWORD;
typedef char              T_UFT_INT1;
typedef short             T_UFT_INT2;
typedef int               T_UFT_INT4;
typedef unsigned int      T_UFT_UINT4;
typedef float             T_UFT_REAL4;
typedef double            T_UFT_REAL8;
typedef char 			  T_UFT_CHAR;

/////////////////////////////////////////////////////////////////////////
///TFtdcErrorIDType是一个错误代码类型
/////////////////////////////////////////////////////////////////////////
typedef int T_UFT_FtdcErrorIDType;

/////////////////////////////////////////////////////////////////////////
///TFtdcPriorityType是一个优先权类型
/////////////////////////////////////////////////////////////////////////
typedef int T_UFT_FtdcPriorityType;

/////////////////////////////////////////////////////////////////////////
///TFtdcSettlementIDType是一个结算编号类型
/////////////////////////////////////////////////////////////////////////
typedef int T_UFT_FtdcSettlementIDType;

/////////////////////////////////////////////////////////////////////////
///TFtdcMonthCountType是一个月份数量类型
/////////////////////////////////////////////////////////////////////////
typedef int T_UFT_FtdcMonthCountType;

/////////////////////////////////////////////////////////////////////////
///TFtdcTradingSegmentSNType是一个交易阶段编号类型
/////////////////////////////////////////////////////////////////////////
typedef int T_UFT_FtdcTradingSegmentSNType;

/////////////////////////////////////////////////////////////////////////
///TFtdcPeriodIDType是一个时间阶段编号类型
/////////////////////////////////////////////////////////////////////////
typedef int T_UFT_FtdcPeriodIDType;

/////////////////////////////////////////////////////////////////////////
///TFtdcVolumeType是一个数量类型
/////////////////////////////////////////////////////////////////////////
typedef int T_UFT_FtdcVolumeType;

/////////////////////////////////////////////////////////////////////////
///TFtdcTimeSortIDType是一个按时间排队的序号类型
/////////////////////////////////////////////////////////////////////////
typedef int T_UFT_FtdcTimeSortIDType;

/////////////////////////////////////////////////////////////////////////
///TFtdcFrontIDType是一个前置编号类型
/////////////////////////////////////////////////////////////////////////
typedef int T_UFT_FtdcFrontIDType;

/////////////////////////////////////////////////////////////////////////
///TFtdcSessionIDType是一个会话编号类型
/////////////////////////////////////////////////////////////////////////
typedef int T_UFT_FtdcSessionIDType;

/////////////////////////////////////////////////////////////////////////
///TFtdcSequenceNoType是一个序列号类型
/////////////////////////////////////////////////////////////////////////
typedef int T_UFT_FtdcSequenceNoType;

/////////////////////////////////////////////////////////////////////////
///TFtdcBulletinIDType是一个公告编号类型
/////////////////////////////////////////////////////////////////////////
typedef int T_UFT_FtdcBulletinIDType;

/////////////////////////////////////////////////////////////////////////
///TFtdcInformationIDType是一个信息编号类型
/////////////////////////////////////////////////////////////////////////
typedef int T_UFT_FtdcInformationIDType;

/////////////////////////////////////////////////////////////////////////
///TFtdcMillisecType是一个时间（毫秒）类型
/////////////////////////////////////////////////////////////////////////
typedef int T_UFT_FtdcMillisecType;

/////////////////////////////////////////////////////////////////////////
///TFtdcVolumeMultipleType是一个合约数量乘数类型
/////////////////////////////////////////////////////////////////////////
typedef int T_UFT_FtdcVolumeMultipleType;

/////////////////////////////////////////////////////////////////////////
///TFtdcImplyLevelType是一个派生层数类型
/////////////////////////////////////////////////////////////////////////
typedef int T_UFT_FtdcImplyLevelType;

/////////////////////////////////////////////////////////////////////////
///TFtdcStartPosType是一个起始位置类型
/////////////////////////////////////////////////////////////////////////
typedef int T_UFT_FtdcStartPosType;

/////////////////////////////////////////////////////////////////////////
///TFtdcDataCenterIDType是一个数据中心代码类型
/////////////////////////////////////////////////////////////////////////
typedef int T_UFT_FtdcDataCenterIDType;

/////////////////////////////////////////////////////////////////////////
///TFtdcCommFluxType是一个通讯量类型
/////////////////////////////////////////////////////////////////////////
typedef int T_UFT_FtdcCommFluxType;

/////////////////////////////////////////////////////////////////////////
///TFtdcAliasType是一个别名类型
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcAliasType[3];

/////////////////////////////////////////////////////////////////////////
///TFtdcOriginalTextType是一个原文类型
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcOriginalTextType[3];

/////////////////////////////////////////////////////////////////////////
///TFtdcParticipantIDType是一个会员代码类型
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcParticipantIDType[11];

/////////////////////////////////////////////////////////////////////////
///TFtdcParticipantNameType是一个会员名称类型
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcParticipantNameType[51];

/////////////////////////////////////////////////////////////////////////
///TFtdcParticipantAbbrType是一个会员简称类型
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcParticipantAbbrType[9];

/////////////////////////////////////////////////////////////////////////
///TFtdcUserIDType是一个交易用户代码类型
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcUserIDType[16];

/////////////////////////////////////////////////////////////////////////
///TFtdcPasswordType是一个密码类型
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcPasswordType[41];

/////////////////////////////////////////////////////////////////////////
///TFtdcClientIDType是一个客户代码类型
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcClientIDType[11];

/////////////////////////////////////////////////////////////////////////
///TFtdcInstrumentIDType是一个合约代码类型
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcInstrumentIDType[31];

/////////////////////////////////////////////////////////////////////////
///TFtdcProductIDType是一个产品代码类型
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcProductIDType[9];

/////////////////////////////////////////////////////////////////////////
///TFtdcProductNameType是一个产品名称类型
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcProductNameType[21];

/////////////////////////////////////////////////////////////////////////
///TFtdcExchangeIDType是一个交易所代码类型
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcExchangeIDType[9];

/////////////////////////////////////////////////////////////////////////
///TFtdcDateType是一个日期类型
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcDateType[9];

/////////////////////////////////////////////////////////////////////////
///TFtdcTimeType是一个时间类型
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcTimeType[9];

/////////////////////////////////////////////////////////////////////////
///TFtdcInstrumentNameType是一个合约名称类型
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcInstrumentNameType[21];

/////////////////////////////////////////////////////////////////////////
///TFtdcProductGroupIDType是一个产品组代码类型
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcProductGroupIDType[9];

/////////////////////////////////////////////////////////////////////////
///TFtdcProductGroupNameType是一个产品组名称类型
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcProductGroupNameType[21];

/////////////////////////////////////////////////////////////////////////
///TFtdcMarketIDType是一个市场代码类型
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcMarketIDType[9];

/////////////////////////////////////////////////////////////////////////
///TFtdcSettlementGroupIDType是一个结算组代码类型
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcSettlementGroupIDType[9];

/////////////////////////////////////////////////////////////////////////
///TFtdcOrderSysIDType是一个报单编号类型
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcOrderSysIDType[17];

/////////////////////////////////////////////////////////////////////////
///TFtdcOTCOrderSysIDType是一个OTC报单编号类型
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcOTCOrderSysIDType[13];

/////////////////////////////////////////////////////////////////////////
///TFtdcExecOrderSysIDType是一个执行宣告系统编号类型
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcExecOrderSysIDType[13];

/////////////////////////////////////////////////////////////////////////
///TFtdcQuoteSysIDType是一个报价编号类型
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcQuoteSysIDType[13];

/////////////////////////////////////////////////////////////////////////
///TFtdcTradeIDType是一个成交编号类型
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcTradeIDType[17];

/////////////////////////////////////////////////////////////////////////
///TFtdcOrderLocalIDType是一个本地报单编号类型
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcOrderLocalIDType[13];

/////////////////////////////////////////////////////////////////////////
///TFtdcComeFromType是一个消息来源类型
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcComeFromType[21];

/////////////////////////////////////////////////////////////////////////
///TFtdcAccountIDType是一个资金帐号类型
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcAccountIDType[13];

/////////////////////////////////////////////////////////////////////////
///TFtdcNewsTypeType是一个公告类型类型
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcNewsTypeType[3];

/////////////////////////////////////////////////////////////////////////
///TFtdcAdvanceMonthType是一个提前月份类型
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcAdvanceMonthType[4];

/////////////////////////////////////////////////////////////////////////
///TFtdcCommodityIDType是一个商品代码类型
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcCommodityIDType[9];

/////////////////////////////////////////////////////////////////////////
///TFtdcIPAddressType是一个IP地址类型
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcIPAddressType[16];

/////////////////////////////////////////////////////////////////////////
///TFtdcProductInfoType是一个产品信息类型
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcProductInfoType[41];

/////////////////////////////////////////////////////////////////////////
///TFtdcProtocolInfoType是一个协议信息类型
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcProtocolInfoType[41];

/////////////////////////////////////////////////////////////////////////
///TFtdcBusinessUnitType是一个业务单元类型
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcBusinessUnitType[21];

/////////////////////////////////////////////////////////////////////////
///TFtdcTradingSystemNameType是一个交易系统名称类型
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcTradingSystemNameType[61];

/////////////////////////////////////////////////////////////////////////
///TFtdcDeliveryModeType是一个交割方式类型
/////////////////////////////////////////////////////////////////////////
///无交割
#define UFT_FTDC_DM_None '0'
///现金交割
#define UFT_FTDC_DM_CashDeliv '1'
///实物交割
#define UFT_FTDC_DM_CommodityDeliv '2'

typedef char T_UFT_FtdcDeliveryModeType;

/////////////////////////////////////////////////////////////////////////
///TFtdcTradingRoleType是一个交易角色类型
/////////////////////////////////////////////////////////////////////////
///代理
#define UFT_FTDC_ER_Broker '1'
///自营
#define UFT_FTDC_ER_Host '2'

typedef char T_UFT_FtdcTradingRoleType;

/////////////////////////////////////////////////////////////////////////
///TFtdcUserTypeType是一个交易用户类型类型
/////////////////////////////////////////////////////////////////////////
///交易员
#define UFT_FTDC_UT_Trader '1'
///交易控制员
#define UFT_FTDC_UT_TradeManager '2'
///行情商用户
#define UFT_FTDC_UT_MDUser '3'
///无授权交易员
#define UFT_FTDC_UT_SingleTrader '4'
///行情代理用户
#define UFT_FTDC_UT_MDProxyUser '5'

typedef char T_UFT_FtdcUserTypeType;

/////////////////////////////////////////////////////////////////////////
///TFtdcProductClassType是一个产品类型类型
/////////////////////////////////////////////////////////////////////////
///期货
#define UFT_FTDC_PC_Futures '1'
///期权
#define UFT_FTDC_PC_Options '2'
///组合
#define UFT_FTDC_PC_Combination '3'
///即期
#define UFT_FTDC_PC_Spot '4'
///期转现
#define UFT_FTDC_PC_EFP '5'

typedef char T_UFT_FtdcProductClassType;

/////////////////////////////////////////////////////////////////////////
///TFtdcOptionsTypeType是一个期权类型类型
/////////////////////////////////////////////////////////////////////////
///非期权
#define UFT_FTDC_OT_NotOptions '0'
///看涨
#define UFT_FTDC_OT_CallOptions '1'
///看跌
#define UFT_FTDC_OT_PutOptions '2'

typedef char T_UFT_FtdcOptionsTypeType;

/////////////////////////////////////////////////////////////////////////
///TFtdcInstrumentStatusType是一个合约交易状态类型
/////////////////////////////////////////////////////////////////////////
///开盘前
#define UFT_FTDC_IS_BeforeTrading '0'
///非交易
#define UFT_FTDC_IS_NoTrading '1'
///连续交易
#define UFT_FTDC_IS_Continous '2'
///集合竞价报单
#define UFT_FTDC_IS_AuctionOrdering '3'
///集合竞价价格平衡
#define UFT_FTDC_IS_AuctionBalance '4'
///集合竞价撮合
#define UFT_FTDC_IS_AuctionMatch '5'
///收盘
#define UFT_FTDC_IS_Closed '6'
///交易业务处理
#define UFT_FTDC_IS_TransactionProcessing '7'


// 系统状态(DCE)
#define UFT_ES_INITING          '0'	          //初始化数据准备中
#define	UFT_ES_INITED           '1'	          //初始化数据准备完成
#define	UFT_ES_LOADED           '2'	          //初始化数据加载完成
#define	UFT_ES_OPEN             '3'	          //开市
#define	UFT_ES_PAUSE            '4'	          //暂停
#define	UFT_ES_CLOSE            '5'	          //闭市
#define	UFT_ES_CLOSEDEALING     '6'	          //闭市后处理中
#define	UFT_ES_CLOSEDEALED      '7'          //闭市后处理完成
#define	UFT_ES_CLEARING         '8'	          //结算中
#define	UFT_ES_CLEARED          '9'	          //结算完成



typedef char T_UFT_FtdcInstrumentStatusType;

/////////////////////////////////////////////////////////////////////////
///TFtdcDirectionType是一个买卖方向类型
/////////////////////////////////////////////////////////////////////////
///买
#define UFT_FTDC_D_Buy '0'
///卖
#define UFT_FTDC_D_Sell '1'

typedef char T_UFT_FtdcDirectionType;

/////////////////////////////////////////////////////////////////////////
///TFtdcPositionTypeType是一个持仓类型类型
/////////////////////////////////////////////////////////////////////////
///净持仓
#define UFT_FTDC_PT_Net '1'
///综合持仓
#define UFT_FTDC_PT_Gross '2'

typedef char T_UFT_FtdcPositionTypeType;

/////////////////////////////////////////////////////////////////////////
///TFtdcPosiDirectionType是一个持仓多空方向类型
/////////////////////////////////////////////////////////////////////////
///净
#define UFT_FTDC_PD_Net '1'
///多头
#define UFT_FTDC_PD_Long '2'
///空头
#define UFT_FTDC_PD_Short '3'

typedef char T_UFT_FtdcPosiDirectionType;

/////////////////////////////////////////////////////////////////////////
///TFtdcExchangeDataSyncStatusType是一个交易所数据同步状态类型
/////////////////////////////////////////////////////////////////////////
///未同步
#define UFT_FTDC_EDS_Asynchronous '1'
///同步中
#define UFT_FTDC_EDS_Synchronizing '2'
///已同步
#define UFT_FTDC_EDS_Synchronized '3'

typedef char T_UFT_FtdcExchangeDataSyncStatusType;

/////////////////////////////////////////////////////////////////////////
///TFtdcSGDataSyncStatusType是一个结算组数据同步状态类型
/////////////////////////////////////////////////////////////////////////
///未同步
#define UFT_FTDC_SGDS_Asynchronous '1'
///同步中
#define UFT_FTDC_SGDS_Synchronizing '2'
///已同步
#define UFT_FTDC_SGDS_Synchronized '3'

typedef char T_UFT_FtdcSGDataSyncStatusType;

/////////////////////////////////////////////////////////////////////////
///TFtdcHedgeFlagType是一个投机套保标志类型
/////////////////////////////////////////////////////////////////////////
///投机
#define UFT_FTDC_HF_Speculation '1'
///套利
#define UFT_FTDC_HF_Arbitrage '2'
///套保
#define UFT_FTDC_HF_Hedge '3'
///做市商
#define UFT_FTDC_HF_MarketMaker '4'

typedef char T_UFT_FtdcHedgeFlagType;

/////////////////////////////////////////////////////////////////////////
///TFtdcClientTypeType是一个客户类型类型
/////////////////////////////////////////////////////////////////////////
///自然人
#define UFT_FTDC_CT_Person '0'
///法人
#define UFT_FTDC_CT_Company '1'
///投资基金
#define UFT_FTDC_CT_Fund '2'

typedef char T_UFT_FtdcClientTypeType;

/////////////////////////////////////////////////////////////////////////
///TFtdcInstStatusEnterReasonType是一个品种进入交易状态原因类型
/////////////////////////////////////////////////////////////////////////
///自动切换
#define UFT_FTDC_IER_Automatic '1'
///手动切换
#define UFT_FTDC_IER_Manual '2'
///熔断
#define UFT_FTDC_IER_Fuse '3'
///熔断手动
#define UFT_FTDC_IER_FuseManual '4'

typedef char T_UFT_FtdcInstStatusEnterReasonType;

/////////////////////////////////////////////////////////////////////////
///TFtdcOrderBs是一个报单价格条件类型
/////////////////////////////////////////////////////////////////////////
//证券
//买
#define UFT_FTDC_SECU_BUY  '1' 
//卖
#define UFT_FTDC_SECU_SELL  '2'
//期权
///开仓
#define UFT_FTDC_OPT_K '0'
///平仓
#define UFT_FTDC_OPT_P '1'
typedef char T_UFT_FtdcOrderBs;

/////////////////////////////////////////////////////////////////////////
///TFtdcOrderPriceTypeType是一个报单价格条件类型
/////////////////////////////////////////////////////////////////////////
//证券
//委托类型'0'限价委托；
//'1'本方最优；
//'2'对手方最优剩余转限价；
//'3'市价立即成交剩余撤销；
//'4'市价全额成交或撤销；
//'5'市价最优五档全额成交剩余撤销
#define UFT_FTDC_SECU_0  '0' 
#define UFT_FTDC_SECU_1  '1'
#define UFT_FTDC_SECU_2  '2'
#define UFT_FTDC_SECU_3  '3'
#define UFT_FTDC_SECU_4  '4'
#define UFT_FTDC_SECU_5  '5'


//期权
///任意价/市价
#define UFT_FTDC_OPT_AnyPrice '1'
///限价
#define UFT_FTDC_OPT_LimitPrice '2'
///最优价
#define UFT_FTDC_OPT_BestPrice '3'
///5档价
#define UFT_FTDC_OPT_FiveLevelPrice '4'

//'K' =市价剩余转限价(期权)
#define UFT_FTDC_OPT_Market2Limit '5'

//期权OrderType
#define UFT_SSEOPT_MARKETPRICE '1'
#define UFT_SSEOPT_LIMITPRICE '2'
#define UFT_SSEOPT_MARKET2LIMIT 'K'


typedef char T_UFT_FtdcOrderPriceTypeType;

/////////////////////////////////////////////////////////////////////////
///TFtdcOffsetFlagType是一个开平标志类型
/////////////////////////////////////////////////////////////////////////
///开仓
#define UFT_FTDC_OF_Open '0'
///平仓
#define UFT_FTDC_OF_Close '1'
///强平
#define UFT_FTDC_OF_ForceClose '2'
///平今
#define UFT_FTDC_OF_CloseToday '3'
///平昨
#define UFT_FTDC_OF_CloseYesterday '4'

//强减
#define UFT_UFTDC_OF_ForceMinus '5'

typedef char T_UFT_FtdcOffsetFlagType;

/////////////////////////////////////////////////////////////////////////
///TFtdcForceCloseReasonType是一个强平原因类型
/////////////////////////////////////////////////////////////////////////
///非强平
#define UFT_FTDC_FCC_NotForceClose '0'
///资金不足
#define UFT_FTDC_FCC_LackDeposit '1'
///客户超仓
#define UFT_FTDC_FCC_ClientOverPositionLimit '2'
///会员超仓
#define UFT_FTDC_FCC_MemberOverPositionLimit '3'
///持仓非整数倍
#define UFT_FTDC_FCC_NotMultiple '4'
///违规
#define UFT_FTDC_FCC_Violation '5'
///其它
#define UFT_FTDC_FCC_Other '6'
///自然人临近交割
#define UFT_FTDC_FCC_PersonDeliv '7'
///客户套保超仓
#define UFT_FTDC_FCC_HedgeOverPositionLimit '8'

typedef char T_UFT_FtdcForceCloseReasonType;

/////////////////////////////////////////////////////////////////////////
///TFtdcOrderStatusType是一个报单状态类型
/////////////////////////////////////////////////////////////////////////
///全部成交
#define UFT_FTDC_OST_AllTraded '0'
///部分成交还在队列中
#define UFT_FTDC_OST_PartTradedQueueing '1'
///部分成交不在队列中
#define UFT_FTDC_OST_PartTradedNotQueueing '2'
///未成交还在队列中
#define UFT_FTDC_OST_NoTradeQueueing '3'
///未成交不在队列中
#define UFT_FTDC_OST_NoTradeNotQueueing '4'
///撤单
#define UFT_FTDC_OST_Canceled '5'
///废单
#define UFT_FTDC_OST_Invalid 'f'
///部分成交已撤
#define UFT_FTDC_OST_PartTraded_Canceled 'g'
///未报
#define UFT_FTDC_OST_Not_Send 'n'
///交易所已接收
#define UFT_FTDC_OST_Received 'r'

typedef char T_UFT_FtdcOrderStatusType;

/////////////////////////////////////////////////////////////////////////
///TFtdcOrderTypeType是一个报单类型类型
/////////////////////////////////////////////////////////////////////////
///正常
#define UFT_FTDC_ORDT_Normal '0'
///报价衍生
#define UFT_FTDC_ORDT_DeriveFromQuote '1'
///组合衍生
#define UFT_FTDC_ORDT_DeriveFromCombination '2'

typedef char T_UFT_FtdcOrderTypeType;

/////////////////////////////////////////////////////////////////////////
///TFtdcOTCOrderStatusType是一个OTC报单状态类型
/////////////////////////////////////////////////////////////////////////
///一方输入
#define UFT_FTDC_OOS_Inputed '0'
///已经确认
#define UFT_FTDC_OOS_Confirmed '1'
///已经撤销
#define UFT_FTDC_OOS_Canceled '2'
///已经拒绝
#define UFT_FTDC_OOS_Refused '3'

typedef char T_UFT_FtdcOTCOrderStatusType;

/////////////////////////////////////////////////////////////////////////
///TFtdcTimeConditionType是一个有效期类型类型
/////////////////////////////////////////////////////////////////////////
///立即完成，否则撤销
#define UFT_FTDC_TC_IOC '1'
///本节有效
#define UFT_FTDC_TC_GFS '2'
///当日有效
#define UFT_FTDC_TC_GFD '3'
///指定日期前有效
#define UFT_FTDC_TC_GTD '4'
///撤销前有效
#define UFT_FTDC_TC_GTC '5'
///集合竞价有效
#define UFT_FTDC_TC_GFA '6'

///对应期权TimInForce///
///GFD, 当日有效
#define UFT_SSEOPT_OPT_GFD '0'

///IOC, 即时成交剩余自动撤销
#define UFT_SSEOPT_OPT_IOC '3'

///FOK, 即时全部成交否则撤销
#define UFT_SSEOPT_OPT_FOK '4'


typedef char T_UFT_FtdcTimeConditionType;

/////////////////////////////////////////////////////////////////////////
///TFtdcVolumeConditionType是一个成交量类型类型
/////////////////////////////////////////////////////////////////////////
///任何数量
#define UFT_FTDC_VC_AV '1'
///最小数量
#define UFT_FTDC_VC_MV '2'
///全部数量
#define UFT_FTDC_VC_CV '3'

typedef char T_UFT_FtdcVolumeConditionType;

/////////////////////////////////////////////////////////////////////////
///TFtdcContingentConditionType是一个触发条件类型
/////////////////////////////////////////////////////////////////////////
///立即
#define UFT_FTDC_CC_Immediately '1'
///止损
#define UFT_FTDC_CC_Touch '2'

typedef char T_UFT_FtdcContingentConditionType;

/////////////////////////////////////////////////////////////////////////
///TFtdcActionFlagType是一个操作标志类型
/////////////////////////////////////////////////////////////////////////
///删除
#define UFT_FTDC_AF_Delete '0'
///挂起
#define UFT_FTDC_AF_Suspend '1'
///激活
#define UFT_FTDC_AF_Active '2'
///修改
#define UFT_FTDC_AF_Modify '3'

typedef char T_UFT_FtdcActionFlagType;

/////////////////////////////////////////////////////////////////////////
///TFtdcOrderSourceType是一个报单来源类型
/////////////////////////////////////////////////////////////////////////
///来自参与者
#define UFT_FTDC_OSRC_Participant '0'
///来自管理员
#define UFT_FTDC_OSRC_Administrator '1'

typedef char T_UFT_FtdcOrderSourceType;

/////////////////////////////////////////////////////////////////////////
///TFtdcTradeTypeType是一个成交类型类型
/////////////////////////////////////////////////////////////////////////
///普通成交
#define UFT_FTDC_TRDT_Common '0'
///期权执行
#define UFT_FTDC_TRDT_OptionsExecution '1'
///OTC成交
#define UFT_FTDC_TRDT_OTC '2'
///期转现衍生成交
#define UFT_FTDC_TRDT_EFPDerived '3'
///组合衍生成交
#define UFT_FTDC_TRDT_CombinationDerived '4'

typedef char T_UFT_FtdcTradeTypeType;

/////////////////////////////////////////////////////////////////////////
///TFtdcPriceSourceType是一个成交价来源类型
/////////////////////////////////////////////////////////////////////////
///前成交价
#define UFT_FTDC_PSRC_LastPrice '0'
///买委托价
#define UFT_FTDC_PSRC_Buy '1'
///卖委托价
#define UFT_FTDC_PSRC_Sell '2'

typedef char T_UFT_FtdcPriceSourceType;

/////////////////////////////////////////////////////////////////////////
///TFtdcAccountStatusType是一个帐户状态类型
/////////////////////////////////////////////////////////////////////////
///激活状态
#define UFT_FTDC_ACCS_Enable '0'
///停止状态
#define UFT_FTDC_ACCS_Disable '1'

typedef char T_UFT_FtdcAccountStatusType;

/////////////////////////////////////////////////////////////////////////
///TFtdcMemberTypeType是一个会员类型类型
/////////////////////////////////////////////////////////////////////////
///交易会员
#define UFT_FTDC_MT_Trading '0'
///结算会员
#define UFT_FTDC_MT_Settlement '1'
///综合会员
#define UFT_FTDC_MT_Compositive '2'

typedef char T_UFT_FtdcMemberTypeType;

/////////////////////////////////////////////////////////////////////////
///TFtdcExecResultType是一个执行结果类型
/////////////////////////////////////////////////////////////////////////
///没有执行
#define UFT_FTDC_OER_NoExec 'n'
///已经取消
#define UFT_FTDC_OER_Canceled 'c'
///执行成功
#define UFT_FTDC_OER_OK '0'
///期权持仓不够
#define UFT_FTDC_OER_NoPosition '1'
///资金不够
#define UFT_FTDC_OER_NoDeposit '2'
///会员不存在
#define UFT_FTDC_OER_NoParticipant '3'
///客户不存在
#define UFT_FTDC_OER_NoClient '4'
///合约不存在
#define UFT_FTDC_OER_NoInstrument '6'
///没有执行权限
#define UFT_FTDC_OER_NoRight '7'
///不合理的数量
#define UFT_FTDC_OER_InvalidVolume '8'
///没有足够的历史成交
#define UFT_FTDC_OER_NoEnoughHistoryTrade '9'

typedef char T_UFT_FtdcExecResultType;

/////////////////////////////////////////////////////////////////////////
///TFtdcYearType是一个年份类型
/////////////////////////////////////////////////////////////////////////
typedef int T_UFT_FtdcYearType;

/////////////////////////////////////////////////////////////////////////
///TFtdcMonthType是一个月份类型
/////////////////////////////////////////////////////////////////////////
typedef int T_UFT_FtdcMonthType;

/////////////////////////////////////////////////////////////////////////
///TFtdcLegMultipleType是一个单腿乘数类型
/////////////////////////////////////////////////////////////////////////
typedef int T_UFT_FtdcLegMultipleType;

/////////////////////////////////////////////////////////////////////////
///TFtdcLegIDType是一个单腿编号类型
/////////////////////////////////////////////////////////////////////////
typedef int T_UFT_FtdcLegIDType;

/////////////////////////////////////////////////////////////////////////
///TFtdcBoolType是一个布尔型类型
/////////////////////////////////////////////////////////////////////////
typedef int T_UFT_FtdcBoolType;

/////////////////////////////////////////////////////////////////////////
///TFtdcUserActiveType是一个交易员活跃情况类型
/////////////////////////////////////////////////////////////////////////
typedef int T_UFT_FtdcUserActiveType;

/////////////////////////////////////////////////////////////////////////
///TFtdcPriceType是一个价格类型
/////////////////////////////////////////////////////////////////////////
typedef double T_UFT_FtdcPriceType;

/////////////////////////////////////////////////////////////////////////
///TFtdcUnderlyingMultipleType是一个合约基础商品乘数类型
/////////////////////////////////////////////////////////////////////////
typedef double T_UFT_FtdcUnderlyingMultipleType;

/////////////////////////////////////////////////////////////////////////
///TFtdcCombOffsetFlagType是一个组合开平标志类型
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcCombOffsetFlagType[5];

/////////////////////////////////////////////////////////////////////////
///TFtdcCombHedgeFlagType是一个组合投机套保标志类型
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcCombHedgeFlagType[5];

/////////////////////////////////////////////////////////////////////////
///TFtdcRatioType是一个比率类型
/////////////////////////////////////////////////////////////////////////
typedef double T_UFT_FtdcRatioType;

/////////////////////////////////////////////////////////////////////////
///TFtdcMoneyType是一个资金类型
/////////////////////////////////////////////////////////////////////////
typedef double T_UFT_FtdcMoneyType;

/////////////////////////////////////////////////////////////////////////
///TFtdcLargeVolumeType是一个大额数量类型
/////////////////////////////////////////////////////////////////////////
typedef double T_UFT_FtdcLargeVolumeType;

/////////////////////////////////////////////////////////////////////////
///TFtdcNewsUrgencyType是一个紧急程度类型
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcNewsUrgencyType;

/////////////////////////////////////////////////////////////////////////
///TFtdcSequenceSeriesType是一个序列系列号类型
/////////////////////////////////////////////////////////////////////////
typedef short T_UFT_FtdcSequenceSeriesType;

/////////////////////////////////////////////////////////////////////////
///TFtdcCommPhaseNoType是一个通讯时段号类型
/////////////////////////////////////////////////////////////////////////
typedef short T_UFT_FtdcCommPhaseNoType;

/////////////////////////////////////////////////////////////////////////
///TFtdcContentLengthType是一个正文长度类型
/////////////////////////////////////////////////////////////////////////
typedef int T_UFT_FtdcContentLengthType;

/////////////////////////////////////////////////////////////////////////
///TFtdcErrorMsgType是一个错误信息类型
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcErrorMsgType[81];

/////////////////////////////////////////////////////////////////////////
///TFtdcAbstractType是一个消息摘要类型
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcAbstractType[81];

/////////////////////////////////////////////////////////////////////////
///TFtdcContentType是一个消息正文类型
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcContentType[501];

/////////////////////////////////////////////////////////////////////////
///TFtdcURLLinkType是一个WEB地址类型
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcURLLinkType[201];

/////////////////////////////////////////////////////////////////////////
///TFtdcIdentifiedCardNoType是一个证件号码类型
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcIdentifiedCardNoType[51];

/////////////////////////////////////////////////////////////////////////
///TFtdcIdentifiedCardNoV1Type是一个原证件号码类型
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcIdentifiedCardNoV1Type[21];

/////////////////////////////////////////////////////////////////////////
///TFtdcPartyNameType是一个参与人名称类型
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcPartyNameType[81];

/////////////////////////////////////////////////////////////////////////
///TFtdcIdCardTypeType是一个证件类型类型
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcIdCardTypeType[16];


/////////////////////////////////////////////////////////////////////////
///TFtdcAdminOrderCommandFlagType是一个管理报单指令类型
/////////////////////////////////////////////////////////////////////////
///不合规的持仓强平
#define UFT_FTDC_AOC_InvalidPositionForceClose '1'
///初始化交易会员信用限额
#define UFT_FTDC_AOC_InitCreditLimit '2'
///调整交易会员信用限额
#define UFT_FTDC_AOC_AlterCreditLimit '3'
///取消交易会员信用限额
#define UFT_FTDC_AOC_CancelCreditLimit '4'

typedef char T_UFT_FtdcAdminOrderCommandFlagType;

/////////////////////////////////////////////////////////////////////////
///TFtdcCurrencyIDType是一个币种代码类型
/////////////////////////////////////////////////////////////////////////
typedef char T_UFT_FtdcCurrencyIDType[4];


/////////////////////////////////////////////////////////////////////////
///TFtdcBusinessLocalIDType是一个本地业务标识类型
/////////////////////////////////////////////////////////////////////////
typedef int T_UFT_FtdcBusinessLocalIDType;

/////////////////////////////////////////////////////////////////////////
///TFtdcSessionTypeType是一个会话类型类型
/////////////////////////////////////////////////////////////////////////
///交易
#define UFT_FTDC_SESSION_Trade 'T'
///行情
#define UFT_FTDC_SESSION_Md 'M'

typedef char T_UFT_FtdcSessionTypeType;

/////////////////////////////////////////////////////////////////////////
///TFtdcRateUnitType是一个外汇交易单位类型
/////////////////////////////////////////////////////////////////////////
typedef int T_UFT_FtdcRateUnitType;

/////////////////////////////////////////////////////////////////////////
///TFtdcExRatePriceType是一个汇率中间价类型
/////////////////////////////////////////////////////////////////////////
typedef double T_UFT_FtdcExRatePriceType;

/////////////////////////////////////////////////////////////////////////
///TFtdcMeasureSecType是一个度量秒数类型
/////////////////////////////////////////////////////////////////////////
typedef int T_UFT_FtdcMeasureSecType;

/////////////////////////////////////////////////////////////////////////
///TFtdcMeasureUsecType是一个度量微秒数类型
/////////////////////////////////////////////////////////////////////////
typedef int T_UFT_FtdcMeasureUsecType;

/////////////////////////////////////////////////////////////////////////
///TFtdcDepthType是一个深度类型
/////////////////////////////////////////////////////////////////////////
typedef int T_UFT_FtdcDepthType;

/////////////////////////////////////////////////////////////////////////
///TFtdcSessionStatusType是一个会话状态类型
/////////////////////////////////////////////////////////////////////////
///已连接
#define UFT_FTDC_SESSIONSTATUS_Connected '0'
///断开
#define UFT_FTDC_SESSIONSTATUS_DisConnected '1'

typedef char T_UFT_FtdcSessionStatusType;

/////////////////////////////////////////////////////////////////////////
///TFtdcExecOrderPositionFlagType是一个期权行权后是否保留期货头寸的标记类型
/////////////////////////////////////////////////////////////////////////
///保留
#define UFT_FTDC_EOPF_Reserve '0'
///不保留
#define UFT_FTDC_EOPF_UnReserve '1'

typedef char T_UFT_FtdcExecOrderPositionFlagType;

/////////////////////////////////////////////////////////////////////////
///TFtdcExecOrderCloseFlagType是一个期权行权后是否自动平仓类型
/////////////////////////////////////////////////////////////////////////
///自动平仓
#define UFT_FTDC_EOCF_AutoClose '0'
///免于自动平仓
#define UFT_FTDC_EOCF_NotToClose '1'

typedef char T_UFT_FtdcExecOrderCloseFlagType;

typedef int T_UFT_ErrorIDType;
typedef char T_UFT_ErrorMsgType[81];

typedef uint64_t T_UFT_ORDERREF_TYPE;
typedef int      T_UFT_TRADEDATE_TYPE;

//错误定义

//网络连接失败
#define UFT_ERROR_ID_NET_CONNECTION_FAIL			-1			

//未处理请求超过许可数
#define UFT_ERROR_ID_UNPROCESSREQ_EXCEEDLIMITED		-2	

//每秒发送请求数超过许可数
#define UFT_ERROR_ID_REQNUM_EXCEEDLIMITED			-3

//合约代码不存在
#define UFT_ERROR_ID_CODE_NOT_EXIST					-4

//价格超过涨跌停价范围
#define UFT_ERROR_ID_PRICE_ERROR					-5

//可用资金不够
#define UFT_ERROR_ID_MARGIN_NOTENOUGH				-6

//平仓仓位不足
#define UFT_ERROR_ID_POSITIONTODAY_NOTENOUGH		-7

#define UFT_ERROR_ID_POSITIONY_NOTENOUGH			-8

//报单不存在
#define UFT_ERROR_ID_ENTRUST_NOT_EXIST				-9

//报单不可撤
#define UFT_ERROR_ID_ENTRUST_CANNOT_CANCEL			-10


// 未知请求
#define UFT_ERR_UNKNOWN_REQ							-100

// 资金账号错误
#define UFT_ERR_FUND_ACCOUNT						-101

// 密码错误
#define UFT_ERR_PASSWORD							-102

// 已登录
#define UFT_ERR_ALREADY_LOGGED_ON					-103

// 密码文件损坏
#define UFT_ERR_PWSSWD_FILE_DESTROY					-104

// 没有权限
#define UFT_ERR_PERMISSION_DENIED					-105


// 用户不存在
#define UFT_ERR_USER_UNEXIST						-106

//获取报单节点失败
#define UFT_ERR_GET_ENTRUST_ITEM                    -107

// 用户状态不正确
#define UFT_ERR_USER_STATUS							-108

// 新密码无效
#define UFT_ERR_NEW_PASSWD_INVALID					-109

// 用户不存在
#define UFT_ERR_USER_UNEXIST					-106

// 请求包非法
#define UFT_ERR_INVALID_MSG							-111

// 委托达到上限
#define UFT_ERR_ENTRUST_CEILING					-112


// 登录请求处理收到会话ID大于允许值
#define UFT_ERR_SESSION_ID							-113

// 投机套保标志不正确
#define UFT_ERR_HEDGE_FLAG							-114

// 没有设置投机套保标识对应的交易编码，不允许交易!
#define UFT_ERR_HEDGE_FUTUACCOUNT					-115

// 每秒报单次数超过限制值
#define UFT_ERR_ORDER_LIMIT							-116

//API INI返回, OK
#define UFT_API_INIT_ERR_OK 0
//API ini返回, sock通讯错误
#define UFT_API_INIT_ERR_CONNFAILED	-1
//账号格式错误
#define UFT_API_INIT_ERR_ACCOUNT_FMT	-2
//客户端交易模式与服务端不匹配错误
#define UFT_API_INIT_ERR_MODE -3
//服务端返回错误
#define UFT_API_INIT_ERR_SERVER -4
//登录失败
#define UFT_API_INIT_ERR_LOGIN_FAILED -5

//字符长度错误
#define UFT_API_INIT_ERR_CHARLENGTH_FAILED -6

//API报单请求返回错误说明
//通讯错误
#define UFT_API_ORDER_ERR_CONN -1
//参数<开平>错误
#define UFT_API_ORDER_ERR_PARAM_OFFSETFLAG -2
//参数<投机套保>错误
#define UFT_API_ORDER_ERR_PARAM_SHFLAG -3
//参数<买卖>错误
#define UFT_API_ORDER_ERR_PARAM_DIR -4
//参数<定单类型>错误
#define UFT_API_ORDER_ERR_PARAM_ORDERTYPE -5
//参数<买卖方向>错误
#define UFT_API_ORDER_ERR_PARAM_DIRECTION -6




#endif
