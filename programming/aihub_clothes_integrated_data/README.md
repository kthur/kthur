# 의류통합데이터 [link](https://www.aihub.or.kr/aihubdata/data/view.do?currMenu=115&topMenu=100&aihubDataSe=data&dataSetSn=71501)
## 1. 데이터수집
  1. 의류 이미지 수짐
      - 10만종 이상 의류 이미지
      - 50만장 이상 의류 이미지
      - 의류 단독 앞/뒤, 모델 시착 앞/뒤/측면 이미지
  2. 메타데이터 수집
      - 아이템 정보: 의류카테고리, 계절, 촬영 형태, 치수 정보, 색상, 디자인 정보, 원단 정보, 취급주의
      - 모델 정보: 성, 연령, 평소 착용 의류 치수, 신체 치수, 직업
## 2. 데이터 가공
  1. Polygon(Intance Segmentation) 가공
  2. 의미 정확성
      - 엑세서리 정보 태그 정확성 95% 이상
      - 세그멘테이션 정확성 90% 이상
## 3. AI 모델 개발
  - MASK R-CNN 기반으로 한 의류 탐지 모델(Segmentation)
## 
