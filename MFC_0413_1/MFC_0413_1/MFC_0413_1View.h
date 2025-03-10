
// MFC_0413_1View.h : CMFC_0413_1View 类的接口
//

#pragma once


class CMFC_0413_1View : public CView
{
protected: // 仅从序列化创建
	CMFC_0413_1View();
	DECLARE_DYNCREATE(CMFC_0413_1View)

// 特性
public:
	CMFC_0413_1Doc* GetDocument() const;

// 操作
public:
	int x, y, x1, y1, flag;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFC_0413_1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
//	afx_msg void OnMButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFC_0413_1View.cpp 中的调试版本
inline CMFC_0413_1Doc* CMFC_0413_1View::GetDocument() const
   { return reinterpret_cast<CMFC_0413_1Doc*>(m_pDocument); }
#endif

