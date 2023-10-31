<!DOCTYPE html>
<html>
    <head>
        <title>opencv summary</title>
        <!--<link rel="stylesheet" type="text/css" href="opencvstyle.css">-->
        <style>
            /* <summary> 태그 스타일 */
            summary {
            background-color: #333; /* 어두운 배경색 설정 */
            color: #fff; /* 글씨 색상 설정 */
            padding: 10px; /* 내부 여백 설정 */
            cursor: pointer; /* 마우스 커서를 포인터로 변경하여 클릭 가능하게 만듭니다. */
            }

            /* <details> 태그 스타일 */
            details {
            background-color: #333; /* 어두운 배경색 설정 */
            color: #fff; /* 글씨 색상 설정 */
            padding: 10px; /* 내부 여백 설정 */
            }

            /* <details> 요소 내부의 화살표 버튼 숨기기 */
            details summary::-webkit-details-marker {
                display: none;
            }

            details summary {
                list-style: none; /* 다른 브라우저에도 적용되도록 추가 */
            }

            /* 강조 표시 스타일 */
            summary:hover {
            background-color: #555; /* 마우스를 올렸을 때 밝은 배경색으로 변경 */
            }

            details[open] {
            background-color: #555; /* 열린 <details> 요소의 배경색 변경 */
            }

            /* <body> 배경색 설정 */
            body {
            background-color: #222; /* 어두운 배경색으로 설정 */
            color: #fff; /* 글씨 색상 설정 */
            }

            /* 코드 창 스타일 */
            div.code {
            background-color: #333; /* 어두운 배경색 설정 */
            color: #fff; /* 텍스트 색상을 밝은 색상(주로 흰색)으로 설정 */
            border: 1px solid #555; /* 테두리 설정 */
            padding: 20px; /* 내부 여백 설정 */
            margin: 20px; /* 외부 여백 설정 */
            border-radius: 5px; /* 둥근 테두리 설정 */
            box-shadow: 2px 2px 5px rgba(0, 0, 0, 0.5); /* 그림자 설정 */
            font-family: Arial, sans-serif; /* 글꼴 설정 */
            overflow: auto; /* 스크롤바 표시 설정 */
            max-width: 100%; /* 최대 너비 설정 */
            }

            /* 코드 창 내부 텍스트 스타일 */
            div.code code {
            font-family: 'Lucida Console', monospace;
            font-size: 10px; /* 텍스트 크기 설정 */
            line-height: 1.4; /* 줄 간격 설정 */
            white-space: nowrap; /* 텍스트 줄 바꿈 비활성화 */
            }

            /* 코드 창 내부 def 강조 스타일 */
            div.code code .def {
            color: #007bff; /* def를 파란색으로 설정 */
            font-weight: bold; /* 강조된 텍스트를 굵게 표시 */
            }

            /* 코드 창 내부 constant 스타일 */
            div.code code .constant {
            color: #00abab; /* 상수를 코발트 색상으로 설정 */
            font-weight: bold; /* 강조된 텍스트를 굵게 표시 */
            }

            /* 코드 창 내부 함수 이름 스타일 강조 */
            div.code code .function {
            color: #ff00ff; /* 함수 이름의 텍스트 색상을 보라색으로 설정 */
            font-weight: bold; /* 함수 이름을 굵게 표시 */
            }

            /* 코드 창 내부 string 스타일 */
            div.code code .string {
            color: #e5a48a; /* string의 텍스트 색상을 보라색으로 설정 */
            font-weight: bold; /* 함수 이름을 굵게 표시 */
            }

            /* 코드 창 내부 define 스타일 */
            div.code code .define {
                color: #ff9900; /* define 텍스트 색상을 오렌지로 설정 */
                font-weight: bold; /* 강조된 텍스트를 굵게 표시 */
            }

            /* 코드 창 내부 주석 스타일 */
            .code code .comment {
                color: #888; /* 주석 텍스트 색상 설정 */
                font-style: italic; /* 주석 텍스트를 이탤릭체로 설정 */
            }

            /* Tooltip 스타일 */
            .tooltip {
                display: none;
                position: absolute;
                background-color: #333;
                color: #fff;
                padding: 5px;
                border-radius: 3px;
                font-size: smaller;
            }

            .tooltip-trigger{
                padding: 5px;
                border-radius: 3px;
                vertical-align: super; /* 텍스트를 상단에 정렬하여 <sup>처럼 보이도록 설정 */
                font-size: smaller; /* 원하는 크기로 조정 가능 */
                color: #007bff; /* 텍스트 색상을 원하는 색상으로 설정 */
                /*text-decoration: underline; /* 밑줄 추가 (선택 사항) */
                /*cursor: help; /* 마우스 커서를 도움말 커서로 설정 (선택 사항) */
            }

            /* a 태그 클릭하지 않았을 때의 스타일 */
            a {
                color: #007bff; /* 원하는 색상으로 설정 */
            }

            /* a 태그 클릭한 후의 스타일 */
            a:active {
                color: #ff0000; /* 클릭한 후의 색상으로 설정 */
            }
        </style>       
    </head>
    
    <body>
        <h1>OpenSource CV Summary</h1>
        <div class="custom-div-dark"> <!-- 기본 파일 세팅 -->
            <details id="file_setting">
                <summary><b>기본 파일 세팅</b></summary>
                <ol>
                    <li>프로젝트 생성</li>
                    <li>C++ 파일 생성</li>
                    <li>프로젝트 속성 열기</li>
                    <ul>
                        <li>C/C++ 탭</li>
                        <ol>
                            <li>일반 &rarr; 추가포함 디렉터리 클릭</li>
                            <li>opencv위치\build\include 위치 복붙</li>
                        </ol>
                        <li>링커 탭</li>
                        <ol>
                            <li>일반 &rarr; 추가 라이브러리 디렉터리 클릭</li>
                            <li>opencv위치\build\x64\vc16\lib 위치 복붙</li>
                            <li>입력 &rarr; 추가종속성 클릭</li>
                            <li>Debug 모드일시 : opencv_worldXXXd.lib<br>Release 모드일시 opencv_worldXXX.lib</li>
                        </ol>
                    </ul>
                </ol>
                <b>파일의 상단 기본 작성 코드</b>
                <div class="code">
                    <code>
                        <span class="function">#include</span> <span class="string">"opencv2/opencv.hpp"</span><br>
                        <span class="function">#include</span> <span class="def">&lt;iostream&gt;</span>
                        <br><br>
                        <span class="function">using namespace</span> <span class="def">cv</span>;<br>
                        <span class="function">using namespace</span> <span class="def">std</span>;
                    </code>
                </div>
            </details>
        </div>

        <div class="custom-div-dark"> <!-- 주요 함수 -->
            <h3>주요 함수</h3>
            <ul id="func_list">
                <li> <!-- imread() -->
                    <details> 
                        <summary>
                            imread()<span class="tooltip-trigger" data-tooltip-id="imread_ex">[역할]</span>
                        </summary>
                        <div class="code">
                            <code>
                                <span class="constant">Mat</span>
                                imread(<span class="def">const</span>
                                <span class="constant">String</span>&
                                <span class="string">filename</span>,
                                <span class="def">int</span>
                                <span class="string">flags</span>
                                =
                                <span class="constant">IMREAD_COLOR</span>); <span class="comment">//상수 참고</span><span class="tooltip-trigger" data-tooltip-id="imread_const_ex">[사용가능 상수]</span>
                            </code>
                        </div>
                        <ul>
                            <li>filename : 불러올 영상 파일 이름</li>
                            <li>flags : 상수 지정(각주 참고)</li>
                            <li>return 값 : Mat 객체(2차원 배열)</li>
                            <hr>
                            <li>파일을 불러와 Mat 객체로 반환</li>
                            <li>파일 이름만 있으면 작업 폴더 위치 탐색</li>
                            <li>상대 경로로 위치 지정</li>
                        </ul>
                    </details>
                </li>

                <li> <!-- imwrite() -->
                    <details> 
                        <summary>
                            imwrite()<span class="tooltip-trigger" data-tooltip-id="imwrite_ex">[역할]</span>
                        </summary>
                        <div class="code">
                            <code>
                                <span class="def">bool</span>
                                imwrite(<span class="def">const</span>
                                <span class="constant">String</span>&
                                <span class="string">filename</span>,
                                <span class="constant">InputArray</span>
                                <span class="string">img</span>,<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                                <span class="def">const</span>
                                std::<span class="constant">vector</span>&lt;<span class="def">int</span>&gt;&
                                <span class="string">params</span>
                                =
                                std::<span class="constant">vector</span>&lt;<span class="def">int</span>&gt;());
                            </code>
                        </div>
                        <ul>
                            <li>filename : 저장할 영상 파일 이름</li>
                            <li>img : 저장할 Mat 객체(2차원 배열)</li>
                            <li>params : 저장할 영상 파일 형식에 의존적인 파라미터(flag & value)<br>(paramId_1, paramValue_1, paramId_2, paramValue_2)</li>
                            <li>return 값 : 성공시 ture, 실패시 flase 반환</li>
                            <hr>
                            <li>filename 문자열에 확장자로 파일 형식 지정</li>
                            <li>params에 옵션 지정이 가능</li>
                            <li>
                                <div class="code">
                                    <code>
                                        <span class="constant">vector</span>&lt;<span class="def">int</span>&gt;params;<br>
                                        params.push_back(<span class="constant">IMWRITE_JPEG_QUALITY</span>); <span class="comment">//IMWRITE_JPEG_QUALITY이 압축률을 의미</span><br>
                                        params.puch_back(95);<br>
                                        imwrite(<span class="string">"파일 경로/파일 이름.확장자명"</span>, img, params);
                                    </code>
                                </div>
                            </li>
                        </ul>

                    </details>
                </li>

                <li> <!-- empty() -->
                    <details> 
                        <summary>
                            empty()<span class="tooltip-trigger" data-tooltip-id="empty_ex">[역할]</span>
                        </summary>
                        <div class="code">
                            <code>
                                <span class="def">bool</span>
                                <span class="constant">Mat</span>::empty() <span class="def">const</span>
                            </code>
                        </div>
                        <ul>
                            <li>return 값 : rows 또는 cols 멤버 변수가 0이거나, data 멤버 변수가 NULL이면 true 반환</li>
                            <hr>
                            <li>불러온 값이 정상적으로 들어왔는가 확인 위함</li>
                        </ul>

                    </details>
                </li>

                <li> <!-- namedWindow() & imshow() -->
                    <details> 
                        <summary>
                            namedWindow() & imshow()<span class="tooltip-trigger" data-tooltip-id="namedWindow_ex">[역할]</span>
                        </summary>
                        <div class="code">
                            <code>
                                <span class="def">void</span>
                                namedWindow(<span class="def">const</span>
                                <span class="constant">String</span>&
                                <span class="string">winname</span>,
                                <span class="def">int</span>
                                <span class="string">flags</span>
                                = <span class="constant">WINDOW_AUTOSIZE</span>);
                                <span class="comment">//상수 참고</span><span class="tooltip-trigger" data-tooltip-id="namedWindow_const_ex">[사용가능 상수]</span>
                            </code>
                        </div>
                        <ul>
                            <li>winname : 생성할 창의 고유 이름 (창 구분에 사용)</li>
                            <li>flags : 창 속성 플래그</li>
                            <hr>
                            <li>보통 창 속성은 Default 값을 사용 (인자 하나만 적어도 OK)</li>
                        </ul>
                        <div class="code">
                            <code>
                                <span class="def">void</span>
                                imshow(<span class="def">const</span>
                                <span class="constant">String</span>&
                                <span class="string">winname</span>,
                                <span class="constant">InputArray</span>
                                <span class="string">mat</span>);
                            </code>
                        </div>
                        <ul>
                            <li>winname : 이미지 삽입할 창 이름</li>
                            <li>mat : 출력할 Mat 데이터(2차원 배열)</li>
                            <hr>
                            <li>mat 객체가 1채널 8bit uchar이면 GrayScale로 나타냄</li>
                            <li>mat 객체가 3채널 8bit uchar이면 RGB TRUE COLOR 나타냄</li>
                            <li>단 Blue, Green, Red 순서임</li>
                        </ul>

                    </details>
                </li>

                <li> <!-- destoryWindow() & destoryAllWindows() -->
                    <details> 
                        <summary>
                            destoryWindow() & destoryAllWindows()<span class="tooltip-trigger" data-tooltip-id="destoryWindow_funs_ex">[역할]</span>
                        </summary>
                        <div class="code">
                            <code>
                                <span class="def">void</span>
                                destoryWindow(<span class="def">const</span>
                                <span class="constant">String</span>&
                                <span class="string">winname</span>);<br>
                                <span class="def">void</span>
                                destoryAllWindows();
                            </code>
                        </div>
                        <ul>
                            <li>winname : 닫을 창 이름</li>
                            <hr>
                            <li>destoryWindow()는 하나의 창만 닫음<br>
                                destoryAllWindows()는 열린 모든 창을 닫음
                            </li>
                        </ul>

                    </details>
                </li>

                <li> <!-- moveWindow() -->
                    <details> 
                        <summary>
                            moveWindow()<span class="tooltip-trigger" data-tooltip-id="moveWindow_ex">[역할]</span>
                        </summary>
                        <div class="code">
                            <code>
                                <span class="def">void</span>
                                moveWindow(<span class="def">const</span>
                                <span class="constant">String</span>&
                                <span class="string">winname</span>,
                                <span class="def">int</span>
                                <span class="string">x</span>,
                                <span class="def">int</span>
                                <span class="string">y</span>);
                            </code>
                        </div>
                        <ul>
                            <li>winname : 이동할 창의 이름</li>
                            <li>x, y : 창이 이동할 좌표</li>
                            <hr>
                            <li>(x, y) 좌표는 모니터 전체 기준 (좌측 상단 부터 (0, 0))</li>
                        </ul>

                    </details>
                </li>

                <li> <!-- resizeWindow() -->
                    <details> 
                        <summary>
                            resizeWindow()<span class="tooltip-trigger" data-tooltip-id="resizeWindow_ex">[역할]</span>
                        </summary>
                        <div class="code">
                            <code>
                                <span class="def">void</span>
                                resizeWindow(<span class="def">const</span>
                                <span class="constant">String</span>&
                                <span class="string">winname</span>,
                                <span class="def">int</span>
                                <span class="string">width</span>,
                                <span class="def">int</span>
                                <span class="string">height</span>);
                            </code>
                        </div>
                        <ul>
                            <li>winname : 변경할 창의 이름</li>
                            <li>width, height : 창 가로 세로</li>
                            <hr>
                            <li>창 전체 크기가 아닌 창의 영역에 영상 크기 의미</li>
                            <li>제목 표시줄, 경계선 두께로 좀 더 큼</li>
                            <li>WINDOW_AUTOSIZE 플래그 사용 시 해당 함수 사용이 불가함</li>
                        </ul>

                    </details>
                </li>

                <li> <!-- waitKey() -->
                    <details> 
                        <summary>
                            waitKey()<span class="tooltip-trigger" data-tooltip-id="waitKey_ex">[역할]</span>
                        </summary>
                        <div class="code">
                            <code>
                                <span class="def">int</span>
                                waitKey(<span class="def">int</span>
                                <span class="string">delay</span> = 0);
                            </code>
                        </div>
                        <ul>
                            <li>delay : 키 입력까지 대기 시간(ms 단, delay ≤ 0이면 무한 대기) </li>
                            <li>return 값 : 눌린 키 값 시간 동안 안 눌린 경우 -1</li>
                            <hr>
                            <li>입력이 있으면 해당 키의 ASCII code 반환</li>
                            <li>보통 imshow()와 연속 호출</li>
                        </ul>

                    </details>
                </li>

                <li> <!-- format() -->
                    <details> 
                        <summary>
                            format()<span class="tooltip-trigger" data-tooltip-id="format_ex">[역할]</span>
                        </summary>
                        <div class="code">
                            <code>
                                <span class="constant">String</span>
                                format(<span class="def">const</span>
                                <span class="def">chat</span>*
                                <span class="string">fmt</span>, <span class="string">...</span>);
                            </code>
                        </div>
                        <ul>
                            <li>fmt : 형식 지정 입력 문자 </li>
                            <li>... : 가변 인자</li>
                            <li>return 값 : 지정 형식 생성 문자열</li>
                            <hr>
                            <li>C와 사용법 동일</li>
                        </ul>

                    </details>
                </li>

                <li> <!-- zeros(), ones(), eye() -->
                    <details> 
                        <summary>
                            zeros(), ones(), eye()<span class="tooltip-trigger" data-tooltip-id="matfunc_ex">[역할]</span>
                        </summary>

                        <div class="code">
                            <code>
                                <span class="def">static</span>
                                <span class="constant">MatExpr</span>
                                <span class="constant">Mat</span>::zeros(<span class="def">int</span>
                                <span class="string">rows</span>,
                                <span class="def">int</span>
                                <span class="string">cols</span>,
                                <span class="def">int</span>
                                <span class="string">type</span>);<br>

                                <span class="def">static</span>
                                <span class="constant">MatExpr</span>
                                <span class="constant">Mat</span>::zeros(<span class="constant">Size</span>
                                <span class="string">size</span>,
                                <span class="def">int</span>,
                                <span class="string">type</span>);
                            </code>
                        </div>
                        <ul>
                            <li>rows : Mat 객체 세로 크기 </li>
                            <li>cols : Mat 객체 가로 크기</li>
                            <li>size : Mat 객체 크기</li>
                            <li>type : Mat 객체 타입</li>
                            <li>return 값 : 모든 원소가 0인 Mat 객체</li>
                            <li>ones(), eye()도 위와 동일</li>
                        </ul>

                        <div class="code">
                            <code>
                                <span class="constant">Mat</span>
                                mat1 =
                                <span class="constant">Mat</span>::zeros(3, 3,
                                <span class="constant">CV_32SC1</span>);<br>
                                <span class="constant">Mat</span>
                                mat2 =
                                <span class="constant">Mat</span>::ones(3, 3,
                                <span class="constant">CV_32SC1</span>);<br>
                                <span class="constant">Mat</span>
                                mat3 =
                                <span class="constant">Mat</span>::eye(3, 3,
                                <span class="constant">CV_32SC1</span>);<br>
                            </code>
                        </div>

                        <div class="code">
                            <code>
                                <div style="display: inline-block;">
                                    mat1 = <br>
                                    [0 0 0<br>
                                    &nbsp;0 0 0<br>
                                    &nbsp;0 0 0]
                                </div>
                                <div style="display: inline-block;">
                                    mat2 = <br>
                                    [1 1 1<br>
                                    &nbsp;1 1 1<br>
                                    &nbsp;1 1 1]
                                </div>
                                <div style="display: inline-block;">
                                    mat3 = <br>
                                    [1 0 0<br>
                                    &nbsp;0 1 0<br>
                                    &nbsp;0 0 1]
                                </div>
                            </code>
                        </div>

                    </details>
                </li>

                <li> <!-- setTo(), = -->
                    <details>
                        <summary>setTo(), =<span class="tooltip-trigger" data-tooltip-id="setTo_ex">[역할]</span></summary>
                        <div class="code">
                            <code>
                                <span class="constant">Mat</span>&
                                <span class="constant">Mat</span>::<span class="constant">operator</span>
                                =
                                (<span class="def">const</span>
                                <span class="constant">Scalar</span>&
                                <span class="string">s</span>);<br><br>

                                <span class="constant">Mat</span>&
                                <span class="constant">Mat</span>::setTo(<span class="constant">InputArray</span>
                                <span class="string">value</span>,
                                <span class="constant">InputArray</span>
                                <span class="string">mask</span>
                                = noArray());
                            </code>
                        </div>
                        <ul>
                            <li>s, value : 행렬 원소로 설정할 값</li>
                            <li>mask : 마스크 행렬(0이 아닌 값만 vaule값으로 변경)
                                <br>전체를 설정하려면 noArray() 또는 Mat() 지정
                            </li>
                            <li>Mat 객체 참조 값</li>
                        </ul>
                        <div class="code">
                            <code>
                                mat4 =
                                <span class="constant">Scalar</span>(255, 0, 0);<br>
                                mat5.setTo(1.f);
                            </code>
                        </div>
                    </details>
                </li>

                <li> <!-- clone(), copyTo() -->
                    <details> 
                        <summary>
                            clone(), copyTo()<span class="tooltip-trigger" data-tooltip-id="copy_ex">[역할]</span>
                        </summary>
                        <div class="code">
                            <code>
                                <span class="constant">Mat</span>
                                <span class="constant">Mat</span>::clone()
                                <span class="def">const</span>;
                            </code>
                        </div>

                        <div class="code">
                            <code>
                                <span class="def">void</span>
                                <span class="constant">Mat</span>::copyTo(<span class="constant">OutputArray</span>
                                <span class="string">m</span>)
                                <span class="def">const</span>;<br>
                                <span class="def">void</span>
                                <span class="constant">Mat</span>::copyTo(<span class="constant">OutputArray</span>
                                <span class="string">m</span>,
                                <span class="constant">InputArray</span>
                                <span class="string">mask</span>)
                                <span class="def">const</span>;
                            </code>
                        </div>

                        <ul>
                            <li>m : 복사되어 저장될 행렬</li>
                            <li>mask : 0이 아닌 좌표만을 복사</li>
                            <li>clone의 return 값 : 복사행렬</li>
                            <li>copyTo는 파라미터에 복사 됨</li>
                            <hr>
                            <li>clone() 함수는 동일 Mat 객체 새로 생성 후 반환</li>
                            <li>copyTo() 함수는 파라미터로 전달된 행렬에 자신을 복사해 넣음</li>
                            <li>copyTo()의 파라미터 행렬이 서로 크기와 타입이 다르면 원소 값 복사만 실행</li>
                            <li>다른 경우, 내부에서 새로 m 행렬 생성 후 복사</li>
                        </ul>

                        <div class="code">
                            <code>
                                <span class="constant">Mat</span> img3;<br>
                                img3 = img1;<br>
                                <span class="comment">//대입 연산자(앝은 복사)</span><br><br>
                                <span class="comment">//깊은 복사</span><br>
                                <span class="constant">Mat</span>
                                img4 = img1.clone();<br><br>

                                <span class="constant">Mat</span> img5;<br>
                                img1.copyTo(img5);
                            </code>
                        </div>

                    </details>
                </li>

                <li> <!-- () 연산자 재정의 -->
                    <details> 
                        <summary>
                            () 연산자 재정의(반전 연산자 ~)<span class="tooltip-trigger" data-tooltip-id="()_ex">[역할]</span>
                        </summary>
                        
                        <div class="code">
                            <code>
                                <span class="constant">Mat</span>
                                <span class="constant">Mat</span>::<span class="constant">operator()</span>(<span class="def">const</span>
                                <span class="constant">Rect</span>&
                                <span class="string">rol</span>)
                                <span class="def">const</span>;<br>
                                <span class="constant">Mat</span>
                                <span class="constant">Mat</span>::<span class="constant">operator()</span>(<span class="constant">Range</span>
                                <span class="string">rowRange</span>,
                                <span class="constant">Range</span>
                                <span class="string">colRange</span>)
                                <span class="def">const</span>;
                            </code>
                        </div>
                        <ul>
                            <li>rol : 사각형 관심 영역</li>
                            <li>rowRange : 관심 행 범위</li>
                            <li>colRange : 관심 열 범위</li>
                            <li>return 값 : 부분 행렬 or 영상</li>
                            <hr>
                            <li>얕은 복사로 실행됨</li>
                            <li>Mat 객체에 ~연산자를 붙이면 255-픽셀값한 Mat 객체를 반환</li>
                        </ul>
                    </details>
                </li>

                <li> <!-- rowRange(), row(), at(), ptr(), iterator -->
                    <details> 
                        <summary>
                            rowRange(), row(), at(), ptr(), iterator<span class="tooltip-trigger" data-tooltip-id="rowcol_ex">[역할]</span>
                        </summary>
                        
                        <div class="code">
                            <code>
                                <span class="comment">//복수의 행,열 접근</span><br>
                                <span class="constant">Mat</span>
                                <span class="constant">Mat</span>::rowRange(<span class="def">int</span>
                                <span class="string">startrow</span>,
                                <span class="def">int</span>
                                <span class="string">endrow</span>)
                                <span class="def">const</span>;<br>
                                <span class="constant">Mat</span>
                                <span class="constant">Mat</span>::rowRange(<span class="def">const</span>
                                <span class="constant">Range</span>&
                                <span class="string">r</span>)
                                <span class="def">const</span>;<br>
                                <span class="constant">Mat</span>
                                <span class="constant">Mat</span>::colRange(<span class="def">int</span>
                                <span class="string">startcol</span>,
                                <span class="def">int</span>
                                <span class="string">endcol</span>)
                                <span class="def">const</span>;<br>
                                <span class="constant">Mat</span>
                                <span class="constant">Mat</span>::colRange(<span class="def">const</span>
                                <span class="constant">Range</span>&
                                <span class="string">r</span>)
                                <span class="def">const</span>;<br><br>
                                
                                <span class="comment">//단일 행,열 접근</span><br>
                                <span class="constant">Mat</span>
                                <span class="constant">Mat</span>::row(<span class="def">int</span>
                                <span class="string">y</span>)
                                <span class="def">const</span>;<br>
                                <span class="constant">Mat</span>
                                <span class="constant">Mat</span>::col(<span class="def">int</span>
                                <span class="string">x</span>)
                                <span class="def">const</span>;<br><br>

                                <span class="comment">//단일 원소 접근</span><br>
                                <span class="def">template</span>&lt;<span class="def">typename</span>
                                <span class="constant">_Tp</span>&gt;
                                <span class="constant">_Tp</span>&
                                <span class="constant">Mat</span>::at(<span class="def">int</span>
                                <span class="string">y</span>,
                                <span class="def">int</span>
                                <span class="string">x</span>)<br>
                                <span class="def">template</span>&lt;<span class="def">typename</span>
                                <span class="constant">_Tp</span>&gt;
                                <span class="constant">_Tp</span>&
                                <span class="constant">Mat</span>::ptr(<span class="def">int</span>
                                <span class="string">y</span>)<br><br>
                                <span class="comment">//사용법임</span><br>
                                <span class="function">for</span>
                                (<span class="constant">MatIterator_</span>
                                &lt;<span class="constant">uchar</span>&gt;
                                it = mat1.begin&lt;<span class="constant">uchar</span>();
                                it != mat1.end&lt;<span class="constant">uchar</span>&gt;();
                                <span class="def">++</span>it) {<br>&nbsp;&nbsp;&nbsp;
                                (*it)<span class="def">++</span>; <span class="comment">//포인터로 접근해야 함</span>
                                <br>
                                }
                            </code>
                        </div>
                        <ul>
                            <li>startrow & startcol : 추출 시작 행 또는 열 번호 (포함)</li>
                            <li>endrow & endcol : 추출 끝 행 또는 열 번호 (불포함)</li>
                            <li>r : 추출할 행 또는 열 Range 객체</li>
                            <li>y : 추출할 행 번호</li>
                            <li>x : 추출할 열 번호</li>
                            <li>return 값 : 해당 행 또는 열의 Mat 객체</li>
                            <hr>
                            <li>얕은 복사로 실행됨</li>
                            <li>깊은 복사는 .clone() 사용하면 됨</li>
                            <li>at(), ptr()은 자료형을 명시적으로 지정해야 함</li>
                            <li>CV_8UC1이면 uchar, CV_32FC1이면 float 지정</li>
                            <li>CV_8UC3이면 Vec3b를 명시해 사용</li>
                            <li>ptr()은 y번째 행의 시작 주소를 반환</li>
                            <li>ptr()이 at()보다 조금 더 빨리 동작</li>
                            <li>다만 행단위 접근이 아닌 임의 좌표 접근의 경우 at()이 더 편리</li>
                        </ul>

                    </details>
                </li>

                <li> <!-- 행열 변환, 수정 -->
                    <details> 
                        <summary>
                            convertTo(), reshape(), resize(), push_back(), pop_back()<span class="tooltip-trigger" data-tooltip-id="typechange_ex">[역할]</span>
                        </summary>
                        
                        <div class="code">
                            <code>
                                <span class="comment">//타입 변경</span><br>
                                <span class="def">void</span>
                                <span class="constant">Mat</span>::convertTo(<span class="constant">OutputArray</span>
                                <span class="string">m</span>,
                                <span class="def">int</span>
                                <span class="string">rtype</span>,
                                <span class="def">double</span>
                                <span class="string">alpha</span>=1,
                                <span class="def">double</span>
                                <span class="string">beta</span>=0)
                                <span class="def">const</span>;<br><br>

                                <span class="comment">//모양 변경</span><br>
                                <span class="constant">Mat</span>
                                <span class="constant">Mat</span>::reshape(
                                <span class="def">int</span>
                                <span class="string">cn</span>,
                                <span class="def">int</span>
                                <span class="string">rows</span>=0)
                                <span class="def">const;</span><br><br>

                                <span class="comment">//행 추가</span>
                                <span class="def">void</span>
                                <span class="constant">Mat</span>::resize(<span class="constant">size_t</span>
                                <span class="string">sz</span>);<br>
                                <span class="def">void</span>
                                <span class="constant">Mat</span>::resize(<span class="constant">size_t</span>
                                <span class="string">sz</span>,
                                <span class="def">const</span>
                                <span class="constant">Scalar</span>&
                                <span class="string">s</span>);<br><br>

                                <span class="comment">//존재 행렬에 데이터 추가</span><br>
                                <span class="def">template</span>&lt;<span class="def">typename</span>
                                <span class="constant">_Tp</span>&gt;
                                <span class="def">void</span>
                                <span class="constant">Mat</span>::push_back(<span class="def">const</span>
                                <span class="constant">_Tp</span>&
                                <span class="string">elem</span>);
                                <br>
                                <span class="def">template</span>&lt;<span class="def">typename</span>
                                <span class="constant">_Tp</span>&gt;
                                <span class="def">void</span>
                                <span class="constant">Mat</span>::push_back(<span class="def">const</span>
                                <span class="constant">Mat_</span>&lt;<span class="constant">_Tp</span>&gt;&
                                <span class="string">elem</span>);
                                <br>
                                <span class="def">template</span>&lt;<span class="def">typename</span>
                                <span class="constant">_Tp</span>&gt;
                                <span class="def">void</span>
                                <span class="constant">Mat</span>::push_back(<span class="def">const</span>
                                std::<span class="constant">vector</span>&lt;<span class="constant">_Tp</span>&gt;&
                                <span class="string">elem</span>);
                                <br>
                                <span class="def">void</span>
                                <span class="constant">Mat</span>::push_back(<span class="def">const</span>
                                <span class="constant">Mat</span>&
                                <span class="string">m</span>);<br>
                                <br>
                                <span class="def">void</span>
                                <span class="constant">Mat</span>::pop_back(<span class="constant">size_t</span>&
                                <span class="string">nelems</span>=1);
                            </code>
                        </div>
                        <ul>
                            <li>m : 출력 행렬, 적절하지 않은 행렬인 경우 새로 할당</li>
                            <li>rtype : 원하는 출력 행렬 타입, 음수면 입력과 같은 타입</li>
                            <li>alpha : 추가 곱할 값</li>
                            <li>beta : 추가 더할 값</li><br>
                            <li>cn : 새 채널 수(0이면 변경 X)</li>
                            <li>rows : 새 행의 수(0이면 변경 X)</li>
                            <li>return 값 : 모양이 변한 행렬 반환</li><br>
                            <li>sz : 새 행 개수</li>
                            <li>s : 새로 추가되는 행 원소 초기 값</li><br>
                            <li>elem : 행렬 맨 마지막 추가할 원소 데이터</li>
                            <li>m : 행렬 맨 마지막 추가할 행렬</li><br>
                            <li>nelem : 제거할 행 개수</li>
                            <hr>
                            <li>reshape()는 얕은 복사로 실행됨</li>
                            <li>sz가 기존 행 개수보다 작으면 아래 제거, 크면 추가</li>
                            <li>추가되는 초기값을 s로 지정 가능</li>
                        </ul>

                    </details>
                </li>

                <li> <!-- setMouseCallBack() -->
                    <details>
                        <summary>setMouseCallBack()<span class="tooltip-trigger" data-tooltip-id="mouseCallback_ex">[역할]</summary>
                        <div class="code">
                            <code>
                                <span class="def">void</span>
                                setMouseCallBack(<span class="def">const</span>
                                <span class="constant">String</span>&
                                <span class="string">winname</span>,
                                <span class="constant">setMouseCallBack</span>
                                <span class="string">onMouse</span>,
                                <span class="def">void</span>*
                                <span class="string">userdata</span> = 0);<br><br>

                                <span class="def">typedef</span>
                                <span class="def">void</span>
                                (*<span class="constant">MouseCallBack</span>)(<span class="def">int</span>
                                event,
                                <span class="def">int</span> x,
                                <span class="def">int</span> y,
                                <span class="def">int</span> flags,
                                <span class="def">void</span>* userdata);
                            </code>
                        </div>

                        <ul>
                            <li>winname = 마우스 이벤트 처리할 창 이름</li>
                            <li>onMOuse = 마우스 이벤트 처리 위한 콜백 함수 이름</li>
                            <li>userdata = 콜백 함수에 전달할 사용자 데이터 포인터 이름</li>
                            <br>
                            <li>flag = MouseEventFlags 상수에서 논리합 조합 전달</li>
                            <li>
                                <details>
                                    <summary>MouseEventFlags 상수 표</summary>
                                    <table border="1px" style="font-size:smaller;">
                                        <thead style="background-color: blanchedalmond; color:black">
                                        <tr><th>MouseEventFlags 상수</th><th>값</th><th>설명</th></tr>
                                        </thead>
                                        <tbody>
                                            <tr><td>EVENT_MOUSEMOVE</td><td>0</td><td>마우스 창 위 움직임</td></tr>
                                            <tr><td>EVENT_LBUTTONDOWN</td><td>1</td><td>마우스 왼쪽 버튼 누름</td></tr>
                                            <tr><td>EVENT_RBUTTONDOWN</td><td>2</td><td>마우스 오른쪽 버튼 누름</td></tr>
                                            <tr><td>EVENT_MBUTTONDOWN</td><td>3</td><td>마우스 가운데 버튼 누름</td></tr>
                                            <tr><td>EVENT_LBUTTONUP</td><td>4</td><td>마우스 왼쪽 버튼 뗌</td></tr>
                                            <tr><td>EVENT_RBUTTONUP</td><td>5</td><td>마우스 오른쪽 버튼 뗌</td></tr>
                                            <tr><td>EVENT_MBUTTONUP</td><td>6</td><td>마우스 가운데 버튼 뗌</td></tr>
                                            <tr><td>EVENT_LBUTTONDBLICK</td><td>7</td><td>마우스 왼쪽 버튼 더블클릭</td></tr>
                                            <tr><td>EVENT_RBUTTONDBLICK</td><td>8</td><td>마우스 오른쪽 버튼 더블클릭</td></tr>
                                            <tr><td>EVENT_MBUTTONDBLICK</td><td>9</td><td>마우스 가운데 버튼 더블클릭</td></tr>
                                            <tr><td>EVENT_MOUSEWHEEL</td><td>10</td><td>휠 앞뒤 돌림</td></tr>
                                            <tr><td>EVENT_MOUSEHWHEEL</td><td>11</td><td>휠 좌우 돌림</td></tr>
                                            <tr></tr><tr></tr><tr></tr><tr></tr><tr></tr>
                                            <tr><td>EVENT_FLAG_LBUTTON</td><td>1</td><td>마우스 왼쪽 버튼 눌림 상태</td></tr>
                                            <tr><td>EVENT_FLAG_RBUTTON</td><td>2</td><td>마우스 오른쪽 버튼 눌림 상태</td></tr>
                                            <tr><td>EVENT_FLAG_MBUTTON</td><td>4</td><td>마우스 가운데 버튼 눌림 상태</td></tr>
                                            <tr><td>EVENT_FLAG_CTRLKEY</td><td>8</td><td>Ctrl 키 누름 상태</td></tr>
                                            <tr><td>EVENT_FLAG_SHIFTKEY</td><td>16</td><td>Shift 키 누름 상태</td></tr>
                                            <tr><td>EVENT_FLAG_ALTKEY</td><td>32</td><td>Alt 키 누름 상태</td></tr>
                                        </tbody>
                                    </table>
                                </details>
                            </li>
                            <li>하단 명령어는 전역 변수 선언부에 해당 부분에 입력</li>
                        </ul>

                        예시
                        
                        <div class="code">
                            <code>
                                <span class="def">void</span>
                                (*<span class="def">on_mouse</span>)(<span class="def">int</span>
                                event,
                                <span class="def">int</span> x,
                                <span class="def">int</span> y,
                                <span class="def">int</span> flags,
                                <span class="def">void</span>*);
                                <br>
                                <span class="comment">//on_mouse는 해당 콜백 함수 이름</span><br><br>
                                .<br>.<br>.<br>
                                <br>

                                namedWindow(<span class="string">"img"</span>);<br>
                                setMouseCallBack(<span class="string">"img"</span>,
                                on_mouse);<br><br>
                                .<br>.<br>.<br>
                                <br>

                                
                                <span class="def">void</span>
                                (*<span class="def">on_mouse</span>)(<span class="def">int</span>
                                event,
                                <span class="def">int</span> x,
                                <span class="def">int</span> y,
                                <span class="def">int</span> flags,
                                <span class="def">void</span>*){<br><br>
                                <span class="comment">//해당 콜백 함수가 불리면 수행할 코드</span><br><br>
                                }
                            </code>
                        </div>
                    </details>
                </li>
            </ul>
        </div>

        <div class="custom-div-dark">
            <h3>그리기 함수</h3>
            <ul>
                <li>
                    <details><!--line()-->
                        <summary>line()</summary>
                        <div class="code">
                            <code>
                                <span class="def">void</span>
                                line(<span class="constant">InuputOutputArray</span>
                                <span class="string">img</span>,
                                <span class="constant">Point</span>
                                <span class="string">pt1</span>,
                                <span class="constant">Point</span>
                                <span class="string">pt2</span>,<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                                <span class="def">const</span>
                                <span class="constant">Scalar</span>&
                                <span class="string">color</span>,
                                <span class="def">int</span>
                                <span class="string">thickness</span> = 1,<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                                <span class="def">int</span>
                                <span class="string">lineType</span> =
                                <span class="constant">LINE_8</span>,
                                <span class="def">int</span>
                                <span class="string">shift</span> = 0);
                            </code>
                        </div>
                        <ul>
                            <li>img : 입출력 영상</li>
                            <li>pt1 : 시작점</li>
                            <li>pt2 : 끝점</li>
                            <li>color : 선 색상(또는 밝기)</li>
                            <li>thickness : 선 두께</li>
                            <li>lineType : 선 타입(LINE_4, LINE_8, LINE_AA 중 하나 지정)</li>
                            <li>shift : 그리기 좌표 값 축소 비율(&gt;&gt; 연산)</li><br>
                            <li>
                                <table id="LineTypes" border=1px style="font-size:3px">
                                    <thead style="background-color: blanchedalmond; color:black">
                                        <tr><th>열거 상수</th><th>값</th><th>설명</th></tr>
                                    </thead>
                                    <tbody>
                                        <tr><td>FILLED</td><td>-1</td><td>내부 채우기(Line에 사용 불가)</td></tr>
                                        <tr><td>LINE_4</td><td>4</td><td>4방향으로만 연결</td></tr>
                                        <tr><td>LINE_8</td><td>8</td><td>8방향으로만 연결</td></tr>
                                        <tr><td>LINE_AA</td><td>18</td><td>안티에일리어싱</td></tr>
                                    </tbody>
                                </table>
                            </li>
                        </ul>
                    </details>
                </li>

                <li>
                    <details> <!-- arrowedLine() -->
                        <summary>arrowedLine()</summary>
                        <div class="code">
                            <code>
                                <span class="def">void</span>
                                arrowedLine(<span class="constant">InuputOutputArray</span>
                                <span class="string">img</span>,
                                <span class="constant">Point</span>
                                <span class="string">pt1</span>,
                                <span class="constant">Point</span>
                                <span class="string">pt2</span>,<br>&nbsp;&nbsp;
                                <span class="def">int</span>
                                <span class="string">thickness</span>=1,
                                <span class="def">int</span>
                                <span class="string">lineType</span>=<span class="constant">LINE_8</span>,
                                <span class="def">int</span>
                                <span class="string">shift</span>=0,
                                <span class="def">double</span>
                                <span class="string">tipLength</span>=0.1);
                            </code>
                        </div>
                        <ul>
                            <li>img : 입출력 영상</li>
                            <li>pt1 : 시작점</li>
                            <li>pt2 : 끝점</li>
                            <li>color : 선 색상(또는 밝기)</li>
                            <li>thickness : 선 두께</li>
                            <li>lineType : 선 타입(<a href="#LineTypes">참고</a>)</li>
                            <li>shift : 그리기 좌표 값 축소 비율(&gt;&gt; 연산)</li>
                            <li>tipLength : 전체 직선의 화살표 길이 비율</li>
                        </ul>
                        
                    </details>
                </li>

                <li>
                    <details> <!-- drawMaker() -->
                        <summary>drawMaker()</summary>
                        <div class="code">
                            <code>
                                <span class="def">void</span>
                                drawMaker(<span class="constant">InuputOutputArray</span>
                                <span class="string">img</span>,
                                <span class="constant">Point</span>
                                <span class="string">position</span>,<br>&nbsp;&nbsp;
                                <span class="def">const</span>
                                <span class="constant">Scalar</span>&
                                <span class="string">color</span>,
                                <span class="def">int</span>
                                <span class="string">makerType</span> =
                                <span class="constant">MARKER_CROSS</span>,<br>&nbsp;&nbsp;
                                <span class="def">int</span>
                                <span class="string">markerSize</span>=20,
                                <span class="def">int</span>
                                <span class="string">thickness</span>=1,
                                <span class="def">int</span>
                                <span class="string">line_type</span>=8);
                            </code>
                        </div>
                        <ul>
                            <li>img : 입출력 영상</li>
                            <li>position : 마커 출력 위치</li>
                            <li>color : 선 색상</li>
                            <li>makerType : 마커 종류(MarkerTypes 상수 중 하나)</li>
                            <li>markerSize : 마커 크기</li>
                            <li>thickness : 선 두께</li>
                            <li>line_type : 선 타입(<a href="#LineTypes">참고</a>)</li><br>
                            <li>
                                <table id="MakerType" border=1px style="font-size:3px">
                                    <thead style="background-color: blanchedalmond; color:black">
                                        <tr><th>열거 상수</th><th>값</th></tr>
                                    </thead>
                                    <tbody>
                                        <tr><td>MARKER_CROSS</td><td>+ 모양</td></tr>
                                        <tr><td>MARKER_TILTED_CROSS</td><td>⨉ 모양</td></tr>
                                        <tr><td>MARKER_STAR</td><td>✳ 모양</td></tr>
                                        <tr><td>MARKER_DIAMOND</td><td>◇ 모양</td></tr>
                                        <tr><td>MARKER_SQUARE</td><td>◻ 모양</td></tr>
                                        <tr><td>MARKER_TRIANGLE_UP</td><td>△ 모양</td></tr>
                                        <tr><td>MARKER_TRIANGLE_DOWN</td><td>▽ 모양</td></tr>
                                    </tbody>
                                </table>
                            </li>
                        </ul>
                    </details>
                </li>

                <li>
                    <details> <!-- rectangle() -->
                        <summary>rectangle()</summary>
                        <div class="code">
                            <code>
                                <span class="def">void</span>
                                rectangle(<span class="constant">InuputOutputArray</span>
                                <span class="string">img</span>,
                                <span class="constant">Point</span>
                                <span class="string">pt1</span>,
                                <span class="constant">Point</span>
                                <span class="string">pt2</span>,<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                                <span class="def">const</span>
                                <span class="constant">Scalar</span>&
                                <span class="string">color</span>,
                                <span class="def">int</span>
                                <span class="string">thickness</span> = 1,<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                                <span class="def">int</span>
                                <span class="string">lineType</span> =
                                <span class="constant">LINE_8</span>,
                                <span class="def">int</span>
                                <span class="string">shift</span> = 0);
                                <br><br>
                                <span class="def">void</span>
                                rectangle(<span class="constant">InuputOutputArray</span>
                                <span class="string">img</span>,
                                <span class="constant">Rect</span>
                                <span class="string">rec</span>,<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                                <span class="def">const</span>
                                <span class="constant">Scalar</span>&
                                <span class="string">color</span>,
                                <span class="def">int</span>
                                <span class="string">thickness</span>=1,<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                                <span class="def">int</span>
                                <span class="string">lineType</span>=8,
                                <span class="def">int</span>
                                <span class="string">shift</span> = 0);
                            </code>
                        </div>
                        <ul>
                            <li>img : 입출력 영상</li>
                            <li>pt1 : 사각형 꼭짓점 좌표</li>
                            <li>pt2 : pt1 대각 방향 꼭짓점 좌표</li>
                            <li>rec : 사각형 위치 정보</li>
                            <li>color : 사각형 색상(밝기)</li>
                            <li>thickness : 사각형 외각선 두께(음수나 FILLED이면 내부 채우기)</li>
                            <li>lineType : 선 타입(<a href="#LineTypes">참고</a>)</li>
                            <li>shift : 그리기 좌표 값 축소 비율(&gt;&gt; 연산)</li><br>
                        </ul>
                    </details>
                </li>

                <li>
                    <details> <!-- circle() -->
                        <summary>circle()</summary>
                        <div class="code">
                            <code>
                                <span class="def">void</span>
                                circle(<span class="constant">InuputOutputArray</span>
                                <span class="string">img</span>,
                                <span class="constant">Point</span>
                                <span class="string">center</span>,
                                <span class="def">int</span>
                                <span class="string">radius</span>,<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                                <span class="def">const</span>
                                <span class="constant">Scalar</span>&
                                <span class="string">color</span>,
                                <span class="def">int</span>
                                <span class="string">thickness</span> = 1,<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                                <span class="def">int</span>
                                <span class="string">lineType</span> =
                                <span class="constant">LINE_8</span>,
                                <span class="def">int</span>
                                <span class="string">shift</span> = 0);
                            </code>
                        </div>
                        <ul>
                            <li>img : 입출력 영상</li>
                            <li>center : 원의 중심 좌표</li>
                            <li>radius : 원의 반지름</li>
                            <li>color : 사각형 색상(밝기)</li>
                            <li>thickness : 사각형 외각선 두께(음수나 FILLED이면 내부 채우기)</li>
                            <li>lineType : 선 타입(<a href="#LineTypes">참고</a>)</li>
                            <li>shift : 그리기 좌표 값 축소 비율(&gt;&gt; 연산)</li><br>
                        </ul>
                    </details>
                </li>
                
                <li>
                    <details> <!-- ellipse() -->
                        <summary>ellipse()</summary>
                        <div class="code">
                            <code>
                                <span class="def">void</span>
                                ellipse(<span class="constant">InuputOutputArray</span>
                                <span class="string">img</span>,
                                <span class="constant">Point</span>
                                <span class="string">center</span>,
                                <span class="constant">Size</span>
                                <span class="string">axes</span>,<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                                <span class="def">double</span>
                                <span class="string">anlge</span>,
                                <span class="def">double</span>
                                <span class="string">startAngle</span>,
                                <span class="def">double</span>
                                <span class="string">endAngle</span>,<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                                <span class="def">const</span>
                                <span class="constant">Scalar</span>&
                                <span class="string">color</span>,
                                <span class="def">int</span>
                                <span class="string">thickness</span> = 1,<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                                <span class="def">int</span>
                                <span class="string">lineType</span> =
                                <span class="constant">LINE_8</span>,
                                <span class="def">int</span>
                                <span class="string">shift</span> = 0);
                            </code>
                        </div>
                        <ul>
                            <li>img : 입출력 영상</li>
                            <li>center : 타원의 중심 좌표</li>
                            <li>axes : 타원의 반지름 Size(x축 반지름, y축 반지름)</li>
                            <li>angle : 타원 회전 각도</li>
                            <li>startAngle : 타원 호의 시작 각도(x축 기준 시계방향)</li>
                            <li>endAngle : 타원 호의 끝 각도(x축 기준 시계방향)</li>
                            <li>color : 타원 색상</li>
                            <li>thickness : 사각형 외각선 두께(음수나 FILLED이면 내부 채우기)</li>
                            <li>lineType : 선 타입(<a href="#LineTypes">참고</a>)</li>
                            <li>shift : 그리기 좌표 값 축소 비율(&gt;&gt; 연산)</li><br>
                        </ul>
                    </details>
                </li>

                <li>
                    <details> <!-- polylines() -->
                        <summary>polylines()</summary>
                        <div class="code">
                            <code>
                                <span class="def">void</span>
                                polylines(<span class="constant">InuputOutputArray</span>
                                <span class="string">img</span>,
                                <span class="constant">InputArrayOfArrays</span>
                                <span class="string">pts</span>,<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                                <span class="def">bool</span>
                                <span class="string">isclosed</span>,
                                <span class="def">const</span>
                                <span class="constant">Scalar</span>&
                                <span class="string">color</span>,
                                <span class="def">int</span>
                                <span class="string">thickness</span> = 1,<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                                <span class="def">int</span>
                                <span class="string">lineType</span> =
                                <span class="constant">LINE_8</span>,
                                <span class="def">int</span>
                                <span class="string">shift</span> = 0);
                            </code>
                        </div>
                        <ul>
                            <li>img : 입출력 영상</li>
                            <li>pts : 다각형 외곽 점들의 좌표 배열, 주로 vecotr&lt;Point&gt; 타입</li>
                            <li>isclosed : true면 마지막과 처음을 잇는 직선 추가</li>
                            <li>color : 선 색상</li>
                            <li>thickness : 사각형 외각선 두께(음수나 FILLED이면 내부 채우기)</li>
                            <li>lineType : 선 타입(<a href="#LineTypes">참고</a>)</li>
                            <li>shift : 그리기 좌표 값 축소 비율(&gt;&gt; 연산)</li><br>
                        </ul>
                    </details>
                </li>

            </ul>
        </div>

        <div class="custom-div-dark">
            <h3>문자열 출력</h3>
            <ul>
                <li>
                    <details> <!-- putText() -->
                        <summary>putText()</summary>
                        <div class="code">
                            <code>
                                <span class="def">void</span>
                                putText(<span class="constant">InuputOutputArray</span>
                                <span class="string">img</span>,
                                <span class="def">const</span>
                                <span class="constant">String</span>&
                                <span class="string">text</span>,
                                <span class="constant">Point</span>
                                <span class="string">org</span>,<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                                <span class="def">int</span>
                                <span class="string">fontFace</span>,
                                <span class="def">double</span>
                                <span class="string">fontScale</span>,
                                <span class="constant">Scalar</span>
                                <span class="string">color</span>,<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                                <span class="def">int</span>
                                <span class="string">thickness</span> = 1,
                                <span class="def">int</span>
                                <span class="string">lineType</span> =
                                <span class="constant">LINE_8</span>,<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                                <span class="def">bool</span>
                                <span class="string">bottomLeftOrigin</span> =
                                <span class="def">false</span>);
                            </code>
                        </div>
                        <ul>
                            <li>img : 입출력 영상</li>
                            <li>text : 출력할 문자열</li>
                            <li>org : 영상에서 문자열을 출력할 위치의 좌측하단 좌표</li>
                            <li>fontFace : 폰트 종류. cv:HersheyFonts에서 선택</li>
                            <li>fontScale : 폰트 크기 확대/축소 비율</li>
                            <li>color : 문자열 색상</li>
                            <li>thickness : 문자열 선 두께</li>
                            <li>lineType : 선 타입(<a href="#LineTypes">참고</a>)</li>
                            <li>bottomLeftOrigin : true이면 좌측하단을 원점으로 간주, false이면 좌측상단이 원점</li><br>
                            <li>
                                <table id="fontFace" border=1px style="font-size:3px">
                                    <thead style="background-color: blanchedalmond; color:black">
                                        <tr><th>열거 상수</th><th>값</th></tr>
                                    </thead>
                                    <tbody>
                                        <tr><td>FONT_HERSHEY_SIMPLEX</td><td>일반 크키 산세리프</td></tr>
                                        <tr><td>FONT_HERSHEY_PLANE</td><td>작은 크키 산세리프</td></tr>
                                        <tr><td>FONT_HERSHEY_DUPLEX</td><td>일반 크키 산세리프<br>(FONT_HERSHEY_SIMPLEX보다 복잡)</td></tr>
                                        <tr><td>FONT_HERSHEY_COMPLEX</td><td>일반 크키 세리프</td></tr>
                                        <tr><td>FONT_HERSHEY_TRIPLEX</td><td>일반 크키 세리프<br>(FONT_HERSHEY_COMPLEX보다 복잡)</td></tr>
                                        <tr><td>FONT_HERSHEY_COMPLEX_SMALL</td><td>FONT_HERSHEY_COMPLEX보다 작은 폰트</td></tr>
                                        <tr><td>FONT_HERSHEY_SCRIPT_SIMPLEX</td><td>필기체 폰트</td></tr>
                                        <tr><td>FONT_HERSHEY_SCRIPT_COMPLEX</td><td>필기체 폰트<br>(FONT_HERSHEY_SCRIPT_SIMPLEX보다 복잡)</td></tr>
                                        <tr><td>FONT_ITALIC</td><td>이텔릭체</td></tr>
                                    </tbody>
                                </table>
                            </li>
                        </ul>
                    </details>
                </li>

                <li>
                    <details> <!-- getTextSize() -->
                        <summary>getTextSize()</summary>
                        <div class="code">
                            <code>
                                <span class="constant">Size</span>
                                getTextSize(<span class="def">const</span>
                                <span class="constant">String</span>&
                                <span class="string">text</span>,
                                <span class="def">int</span>
                                <span class="string">fontFace</span>,<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                                <span class="def">double</span>
                                <span class="string">fontScale</span>,
                                <span class="def">int</span>
                                <span class="string">thickness</span>,
                                <span class="def">int</span>*
                                <span class="string">baseLine</span>);
                            </code>
                        </div>
                        <ul>
                            <li>text : 출력할 문자열</li>
                            <li>fontFace : 폰트 종류. (<a href="#fontFace">참고</a>)</li>
                            <li>fontScale : 폰트 크기 확대/축소 비율</li>
                            <li>thickness : 문자열 선 두께</li>
                            <li>baseLine : 가장 하단 텍스트 위치 기준, 기준선의 y좌표<br>(필요 없을 시 0 지정)</li>
                            <li>return 값 : 지정 문자열 출력 시 차치하는 사각형 크기</li>
                        </ul>

                        <div class="code">
                            <code>
                                <span class="constant">Mat</span>
                                img(200, 640,
                                <span class="constant">CV_8UC3</span>,
                                <span class="constant">Scalar</span>(255, 255, 255));<br><br>

                                <span class="def">const</span>
                                <span class="constant">String</span>
                                text = <span class="string">"Hello, OpenCV"</span>;<br>
                                <span class="def">int</span>
                                fontFace =
                                <span class="constant">FONT_HERSHEY_TRIPLEX</span>;<br>
                                <span class="def">double</span>
                                fontScale = 2.0;<br>
                                <span class="def">int</span>
                                thickness = 1;<br><br>

                                <span class="constant">Size</span>
                                sizeText = getTextSize(text, fontFace,<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                                fontScale, thickness, 0);<br>
                                <span class="comment">//해당 인자로 putText() 했을 때의 Size 객체 받아오기</span><br>
                                <span class="constant">Size</span>
                                sizeImg = img.size();<br><br>

                                <span class="constant">Point</span>
                                org((sizeImg.width - sizeText.width) / 2,<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                                (sizeImg.height + sizeText.height) / 2);<br>
                                <span class="comment">//텍스트 왼쪽 하단 기준이기에 창과 텍스트 크기를 계산 해<br>//가운데로 오도록 Point 지정</span><br>
                                putText(img, text, org, fontFace, fontScale,<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                                <span class="constant">Scalar</span>(255, 0, 0), thickness);<br><br>
                                
                                rectangle(img, org, org +
                                <span class="constant">Point</span>
                                (sizeText.width - sizeText.height),<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                                <span class="constant">Scalar</span>(255, 0, 0), thickness);<br><br>
                                
                                imshow(<span class="string">"img"</span>, img);<br>
                                waitKey(0);<br><br>

                                destoryAllWindows();
                            </code>
                        </div>
                    </details>
                </li>
            </ul>
        </div>

        <div class="custom-div-dark"> <!-- 주요 클래스 -->
            <h3>주요 클래스</h3>
            <ul>
                <li> <!-- 기본 자료형 -->
                    <details> 
                        <summary>
                            기본 자료형 Class
                        </summary>
                        <ul id="basic_types">
                            <li> <!-- Point_ -->
                                <details> 
                                    <summary>Point_</summary>
                                    2차원 평면 위의 점을 읽는 용도<br><br>
                                    <img src = https://cdn.discordapp.com/attachments/718680346073497635/1160431347333083146/image.png?ex=6534a2e8&is=65222de8&hm=58d6af61b3252ef9a76b6650aa9cdeb84116185cd287635d95218a2b14de2a7e&
                                    width = 400, height = 300>
                                    <ul>
                                        <li>
                                            dot() : 두 점 사이 내적 계산
                                        </li>
                                        <li>
                                            ddot() : 두 점 사이 내적 계산(실수(double) 반환)
                                        </li>
                                        <li>
                                            cross() : 두 점 사이 외적 계산
                                        </li>
                                        <li>
                                            inside() : 해당 Point 객체가 r 객체 안에 존재하면 true 반환
                                        </li>
                                    </ul>
                                    <div class="code">
                                        <code>
                                            <span class="constant">Point</span>
                                            pt1;<br>
                                            <span class="comment">//pt1 = (0, 0)</span><br>
                                            pt1.x = 5; pt1.y = 10;<br>
                                            <span class="comment">//pt1 = (5, 10)</span><br>
                                            <span class="constant">Point</span>
                                            pt2(10, 30);<br>
                                            <span class="comment">//pt2 = (10, 30)</span><br>
                                        </code>
                                    </div> 
                                    <div class="code">
                                        <code>
                                            <span class="comment">//pt1 = [5,10], pt2 = [10, 30]</span><br>
                                            <span class="constant">Point</span>
                                            pt3 = pt1 <span class="def">+</span> pt2;<br>
                                            <span class="comment">//pt3 = [15, 40]</span><br>
                                            <span class="constant">Point</span>
                                            pt4 = pt1 <span class="def">*</span> 2;<br>
                                            <span class="comment">//pt4 = [10, 20]</span><br>
                                            <span class="def">int</span>
                                            d1 = pt1.dot(pt2);<br>
                                            <span class="comment">//d1 = 350(내적값)</span><br>
                                            <span class="def">bool</span>
                                            b1 = (pt1
                                            <span class="def">==</span>
                                            pt2);<br>
                                            <span class="comment">//b1 = false</span><br>
                                            cout <span class="constant">&lt;&lt;</span>
                                            <span class="string">"pt1: "</span>
                                            <span class="constant">&lt;&lt;</span>
                                            endl;<br>
                                            pt1: [5, 10] <span class="comment">//출력결과</span>
                                        </code>
                                    </div>

                                </details>
                            </li>

                            <li>  <!-- Size_ -->
                                <details>
                                    <summary>Size_</summary>
                                    영상, 사각형 영역의 크기 표현<br><br>
                                    <img src = https://cdn.discordapp.com/attachments/718680346073497635/1160440413216309248/image.png?ex=6534ab5a&is=6522365a&hm=b73dfa584e304cfbcc1ba7f65d39950e1bf4276f136a322b3f8a1d48b56024ac&
                                    width = 400, height = 300>
                                    <ul>
                                        <li>
                                            area() : width x height 반환
                                        </li>
                                        <li>
                                            empty() : 유효하지 않은 크기일 시 true 반환
                                        </li>
                                    </ul>
                                    <div class="code">
                                        <code>
                                            <span class="constant">Size</span>
                                            sz1, sz2(10, 20);<br>
                                            <span class="comment">// sz1 = [0 x 0], sz2 = [10 x 20]</span><br>
                                            sz1.width = 5; sz1.height = 10;<br>
                                            <span class="comment">//sz1 = [5 x 10]</span>
                                        </code>
                                    </div>
                                    <div class="code">
                                        <code>                                            
                                            <span class="comment">// sz1 = [5 x 10], sz2 = [10 x 20]</span><br>
                                            <span class="constant">Size</span>
                                            sz3 = sz1
                                            <span class="def">+</span>
                                            sz2;<br>
                                            <span class="comment">//sz3 = [15 x 30]</span><br>
                                            <span class="constant">Size</span>
                                            sz4 = sz1
                                            <span class="def">*</span>
                                            2;<br>
                                            <span class="comment">//sz4 = [10 x 20]</span><br>
                                            <span class="def">int</span>
                                            area1 = sz4.area();<br>
                                            <span class="comment">//area1 = 200 (넓이 연산)</span><br>      
                                            cout <span class="constant">&lt;&lt;</span>
                                            <span class="string">"sz3: "</span>
                                            <span class="constant">&lt;&lt;</span>
                                            endl;<br>
                                            sz3: [15 x 10] <span class="comment">//출력결과</span>
                                        </code>
                                    </div>
    
                                </details>
                            </li>

                            <li>  <!-- Rect_ -->
                                <details>
                                    <summary>Rect_</summary>
                                    사각형의 위치와 크기 정보 표현<br><br>
                                    <img src = https://media.discordapp.net/attachments/718680346073497635/1160448346616496210/image.png?ex=6534b2bd&is=65223dbd&hm=570c90a8f174ed7e389e8a2c3fe8f6591c56c9e4e5b9a5f72da98ed8748f46f3&=&width=495&height=451
                                    width = 400, height = 300>
                                    <ul>
                                        <li>
                                            tl() : 좌측 상단의 점 반환
                                        </li>
                                        <li>
                                            br() : 우측 하단의 점 반환
                                        </li>
                                        <li>
                                            size() : 크기 정보 반환
                                        </li>
                                        <li>
                                            area() : 면적 반환
                                        </li>
                                        <li>
                                            empty() : 유효하지 않은 사각형일 시 true 반환
                                        </li>
                                    </ul>
                                    <div class="code">
                                        <code>
                                            <span class="constant">Rect</span>
                                            rc1;<br>
                                            <span class="comment">//rc1 = [0 x 0 from (0, 0)]</span><br>
                                            <span class="constant">Rect</span>
                                            rc2(10, 10, 60, 40);<br>
                                            <span class="comment">//rc2 = [60 x 40 from (10, 10)]</span>
                                        </code>
                                    </div>
                                    <div class="code">
                                        <code>
                                            <span class="comment">//rc1 = [0 x 0 from (0, 0)]</span><br>
                                            <span class="comment">//사각형 크기 변경</span><br>
                                            <span class="constant">Rect</span>
                                            rc3 = rc1 <span class="def">+</span>
                                            <span class="constant">Size</span>(50, 40);<br>
                                            <span class="comment">//rc3 = [50 x 40 from (0, 0)]</span><br><br>
                                            <span class="comment">//rc2 = [60 x 40 from (10, 10)]</span><br>
                                            <span class="comment">//사각형 위치 변경</span><br>
                                            <span class="constant">Rect</span>
                                            rc4 = rc2 <span class="def">+</span>
                                            <span class="constant">Point</span>(10, 10);<br>
                                            <span class="comment">//rc4 = [60 x 40 from (20, 20)]</span><br>
                                        </code>
                                    </div>
                                    <div class="code">
                                        <code>
                                            <span class="comment">//rc3 = [50 x 40 from (0, 0)]</span><br>
                                            <span class="comment">//rc4 = [60 x 40 from (20, 20)]</span><br>
                                            <span class="comment">//사각형 and구역 정보</span><br>
                                            <span class="constant">Rect</span>
                                            rc5 = rc3 <span class="def">&</span>
                                            rc4;<br>
                                            <span class="comment">//rc5 = [30 x 20 from (10, 10)]</span><br><br>
                                            <span class="comment">//사각형 or구역 정보</span><br>
                                            <span class="constant">Rect</span>
                                            rc6 = rc3 <span class="def">|</span>
                                            rc4;<br>
                                            <span class="comment">//rc6 = [80 x 60 from (0, 0)]</span><br>
                                        </code>
                                        &와 |연산 그림 설명<br>
                                        <canvas id="&|Rextoperator" width="155" height="155"></canvas><br>
                                        <span style="color:greenyellow">초록 영역</span>
                                        : & 연산 결과 영역<br>
                                        <span style="color:violet">보라 영역</span>
                                        : | 연산 결과 영역
                                    </div>
                                    <div class="code">
                                        <code>
                                            cout <span class="constant">&lt;&lt;</span>
                                            <span class="string">"rc5: "</span>
                                            <span class="constant">&lt;&lt;</span>
                                            rc5
                                            <span class="constant">&lt;&lt;</span>
                                            endl;<br>
                                            cout <span class="constant">&lt;&lt;</span>
                                            <span class="string">"rc6: "</span>
                                            <span class="constant">&lt;&lt;</span>
                                            rc6
                                            <span class="constant">&lt;&lt;</span>
                                            endl;<br>
                                            <span class="comment">//출력결과</span><br>
                                            rc5: [30 x 20 from (20, 20)]<br>
                                            rc6: [80 x 60 from (0, 0)]
                                        </code>
                                    </div>
    
                                </details>
                            </li>

                            <li>  <!-- RotatedRect_ -->
                                <details>
                                    <summary>RotatedRect_</summary>
                                    회전한 사각형 영역의 표현<br><br>
                                    <img src = https://cdn.discordapp.com/attachments/718680346073497635/1160458298244472912/image.png?ex=6534bc02&is=65224702&hm=ffe73aa0fc75d3b63d5dbe8fb90b497ca152e046889d518f5800d796fdde1214&
                                    width = 400, height = 300>
                                    <ul>
                                        <li>
                                            points() : 회전된 사각형의 네 꼭지점 반환
                                        </li>
                                        <li>
                                            boundingRect() : 회전된 사각형 포함하는 최소 크기 사각형 정보 반환
                                        </li>
                                        <li>
                                            boundingRect2f() : 회전된 사각형 포함하는 최소 크기 사각형 정보 반환(float형)
                                        </li>
                                    </ul>
                                    <div class="code">
                                        <code>
                                            <span class="constant">RotatedRect</span>
                                            rr1(<span class="constant">Point2f</span>(40,30),
                                            <span class="constant">Size2f</span>(40,20),
                                            30.f);<br>
                                            <span class="comment">//rr1은 중심이 40, 30</span><br>
                                            <span class="comment">//크기가 40, 20</span><br>
                                            <span class="comment">//30' 회전된 사각형</span><br>
                                            <br>
                                            <span class="constant">Point2f</span>
                                            pts[4];<br>
                                            <span class="comment">//네 꼭지점 좌표 저장할 배열 생성</span><br>
                                            rr1.points(pts);<br>
                                            <span class="comment">//pts 배열에 꼭지점 정보 저장</span>
                                        </code>
                                    </div>
                                    <div class="code">
                                        <code>                                            
                                            <span class="constant">Rect</span>
                                            br = rr1.boundingRect();<br>
                                        </code>
                                        해당 함수 실행 시<br>
                                        <canvas id="rotatedRect_ex" width="200" height="155"></canvas><br>
                                    </div>
    
                                </details>
                            </li>

                            <li>  <!-- Range -->
                                <details>
                                    <summary>Range</summary>
                                    범위와 구간의 표현<br><br>
                                    <img src = https://cdn.discordapp.com/attachments/718680346073497635/1160474853372088390/image.png?ex=6534cb6d&is=6522566d&hm=0066a4092cbed81b899c39d53e99a6d12d44f48b491266ed0ef5452483568709&
                                    width = 400, height = 200>
                                    <ul>
                                        <li>
                                            size() : 범위 크기(end - start) 반환
                                        </li>
                                        <li>
                                            empty() : start = end일시 ture 반환
                                        </li>
                                        <li>
                                            all() : start = INT_MIN, end = INT_MAX로 설정한 Range 객체 반환
                                        </li>
                                    </ul>
                                    <div class="code">
                                        <code>
                                            <span class="constant">Range</span>
                                            r1(0, 10);<br>
                                            <span class="comment">//0-9까지</span>
                                        </code>
                                    </div>
    
                                </details>
                            </li>
                        </ul>
                    </details>
                </li>

                <li> <!-- Mat Class-->
                    <details>
                        <summary>Mat Class</summary>
                        <br>
                        <img src="https://media.discordapp.net/attachments/718680346073497635/1160487031697326151/image.png?ex=6534d6c5&is=652261c5&hm=c1646a8cb82f1ab2997a375662a94b276276808bef1de547a2abcb975b4ed668&=&width=406&height=451"
                        width="300" height="400">
                        
                        <ul> <!-- Mat class 설명 -->
                            <li>
                                Mat::dims : 차원을 나타냄
                            </li>
                            <li>
                                Mat::rows : 행 개수(세로 픽셀 크기)<br>
                                Mat::cols : 열 개수(가로 픽셀 크기)
                            </li>
                            <li>
                                Mat::size : 3차원 이상 시 -1<br>
                                크기 반환
                            </li>
                            <li>
                                Mat::data : 원소 데이터 저장되어 있는 메모리 공간을 가리키는 포인터형 멤버 변수<br>
                                아무것도 없을 떄는 0(NULL)값을 가짐
                            </li>
                        </ul><br>
                        지원 자료형
                        <ul>
                            <li>
                                unsigned char
                            </li>
                            <li>
                                signed char
                            </li>
                            <li>
                                unsigned short
                            </li>
                            <li>
                                signed short
                            </li>
                            <li>
                                int
                            </li>
                            <li>
                                float
                            </li>
                            <li>
                                double
                            </li>
                        </ul>
                        <div class="code">
                            <code>
                                <span class="constant">CV_&lt;bit-dept&gt;{U|S|F}C(&lt;number_of_channels&gt;)</span>
                            </code>
                        </div>
                        <details> <!-- bit_dept-->
                            <summary>bit_dept</summary>
                            <div class="code" >
                                <code>
                                    <span class="comment">//uchar, unsigned char</span><br>
                                    <span class="define">#define</span>
                                    <span class="constant">CV_8U</span>
                                    &nbsp;&nbsp;&nbsp;&nbsp;0<br>
                                    <span class="comment">//schar, signed char</span><br>
                                    <span class="define">#define</span>
                                    <span class="constant">CV_8S</span>
                                    &nbsp;&nbsp;&nbsp;&nbsp;0<br>
                                    <span class="comment">//ushort, unsigned short</span><br>
                                    <span class="define">#define</span>
                                    <span class="constant">CV_16U</span>
                                    &nbsp;&nbsp;&nbsp;0<br>
                                    <span class="comment">//signed short</span><br>
                                    <span class="define">#define</span>
                                    <span class="constant">CV_16S</span>
                                    &nbsp;&nbsp;&nbsp;0<br>
                                    <span class="comment">//int</span><br>
                                    <span class="define">#define</span>
                                    <span class="constant">CV_32S</span>
                                    &nbsp;&nbsp;&nbsp;0<br>
                                    <span class="comment">//float</span><br>
                                    <span class="define">#define</span>
                                    <span class="constant">CV_32F</span>
                                    &nbsp;&nbsp;&nbsp;0<br>
                                    <span class="comment">//double</span><br>
                                    <span class="define">#define</span>
                                    <span class="constant">CV_64F</span>
                                    &nbsp;&nbsp;&nbsp;0<br>
                                    <span class="comment">//float16_t</span><br>
                                    <span class="define">#define</span>
                                    <span class="constant">CV_16F</span>
                                    &nbsp;&nbsp;&nbsp;0<br>
                                </code>
                            </div>
                        </details>
                        <details> <!-- channel-->
                            <summary>channel</summary>
                            <ul>
                                <li>
                                    Chanel 1 = GrayScale
                                </li>
                                <li>
                                    Channel 3 = RGB TRUE COLOR<br>
                                    중요! B, G, R순서임
                                </li>
                            </ul>
                        </details><br>
                        <details> <!-- Mat 객체 생성 -->
                            <summary>Mat 객체 생성</summary><br>
                            <details> <!-- 기본 행렬 생성자 -->
                                <summary>기본 행렬 생성자</summary>
                                <div class="code">
                                    <code>
                                        <span class="constant">Mat</span>::Mat(<span class="def">int</span>
                                        <span class="string">rows</span>,
                                        <span class="def">int</span>
                                        <span class="string">cols</span>,
                                        <span class="def">int</span>
                                        <span class="string">type</span>);<br>
                                        <span class="constant">Mat</span>::Mat(<span class="def">int</span>
                                        <span class="string">rows</span>,
                                        <span class="def">int</span>
                                        <span class="string">cols</span>,
                                        <span class="def">int</span>
                                        <span class="string">type</span>,
                                        <span class="def">const</span>
                                        <span class="constant">Scalar</span>&
                                        <span class="string">s</span>);<br>
                                        <span class="constant">Mat</span>::Mat(<span class="def">int</span>
                                        <span class="string">rows</span>,
                                        <span class="def">int</span>
                                        <span class="string">cols</span>,
                                        <span class="def">int</span>
                                        <span class="string">type</span>,
                                        <span class="def">void</span>*
                                        <span class="string">data</span>,
                                        <span class="constant">size_t</span>
                                        <span class="string">step</span>=<span class="constant">AUTO_STEP</span>);
                                    </code>
                                </div>
                                <ul>
                                    <li>
                                        rows : 행 개수
                                    </li>
                                    <li>
                                        cols : 열 개수
                                    </li>
                                    <li>
                                        type : 행렬의 타입
                                    </li>
                                    <li>
                                        s : 행렬 원소 초깃값
                                    </li>
                                    <li>
                                        data : 외부 행렬 데이터 주소<br>
                                        외부 주소 사용 시 Mat 데이터 저장 위한 메모리 생성 X
                                    </li>
                                    <li>
                                        step : 한 행이 차지하는 바이트 수
                                    </li>
                                    <hr>
                                    <li>
                                        생성되는 객체는 세로 x 가로 형태임
                                    </li>
                                </ul>
                                <div class="code">
                                    <code>
                                        <span class="constant">Mat</span>
                                        img2(480, 640,
                                        <span class="constant">CV_8UC1</span>);<br>
                                        <span class="comment">//640 x 480, unsigned char, 1-channel</span><br>
    
                                        <span class="constant">Mat</span>
                                        img5(480, 640,
                                        <span class="constant">CV_8UC1</span>,
                                        <span class="constant">Scalar</span>(128));<br>
                                        <span class="comment">//initial values, 128</span><br>
    
                                        <span class="constant">Mat</span>
                                        img3(480, 640,
                                        <span class="constant">CV_8UC3</span>);<br>
                                        <span class="comment">//640 x 480, unsigned char, 3-channel</span><br>
    
                                        <span class="constant">Mat</span>
                                        img6(480, 640,
                                        <span class="constant">CV_8UC1</span>,
                                        <span class="constant">Scalar</span>(0, 0, 255));<br>
                                        <span class="comment">//initial values, red</span><br><br>
    
                                        <span class="def">float</span> data[] = {1, 2, 3, 4, 5, 6};<br>
                                        <span class="constant">Mat</span> mat4(2, 3,
                                        <span class="constant">CV_32FC1</span>, data);<br><br>
    
                                        <span class="constant">Mat_</span>
                                        &lt;<span class="def">float</span>&gt;
                                        mat5_(2,3);<br>
                                        mat5_ <span class="constant">&lt;&lt;</span>
                                        1, 2, 3, 4, 5, 6;<br>
                                        <span class="constant">Mat</span>
                                        mat5 = mat5_;<br><br>
    
                                        <span class="constant">Mat_</span>
                                        mat5 = (<span class="constant">Mat_</span>&lt;<span class="def">float</span>&gt;
                                        mat5_(2,3)
                                        <span class="constant">&lt;&lt;</span>
                                        1, 2, 3, 4, 5, 6);<br><br>
    
                                        <span class="constant">Mat_</span>
                                        mat6 = <span class="constant">Mat_</span>&lt;<span class="def">float</span>&gt;({2, 3,},
                                        {1, 2, 3, 4, 5, 6});<br>
    
                                        <span class="comment">//해당 4 방식 모두 2x3 배열로 채움</span><br>
                                        <span class="comment">//1, 2, 3,</span><br>
                                        <span class="comment">//4, 5, 6</span>
    
                                    </code>
                                </div><br>
                            </details>
                            
                            <details> <!-- Size 사용 생성자 -->
                                <summary>Size 사용 생성자</summary>
                                <div class="code">
                                    <code>
                                        <span class="constant">Mat</span>::Mat(<span class="constant">Size</span>
                                        <span class="string">size</span>,
                                        <span class="def">int</span>
                                        <span class="string">type</span>);<br>
                                        <span class="constant">Mat</span>::Mat(<span class="constant">Size</span>
                                        <span class="string">size</span>,
                                        <span class="def">int</span>
                                        <span class="string">type</span>,
                                        <span class="def">const</span>
                                        <span class="constant">Scalar</span>&
                                        <span class="string">s</span>);
                                    </code>
                                </div>
                                <ul>
                                    <li>
                                        size : Size(cols, rows) 또는 Size(width, height)
                                    </li>
                                    <li>
                                        type : 행렬의 타입
                                    </li>
                                    <li>
                                        s : 행렬 원소 초깃값
                                    </li>
                                    <hr>
                                    <li>
                                        생성되는 객체는 가로 x 세로임
                                    </li>
                                </ul>
                                <div class="code">
                                    <code>
                                        <span class="constant">Mat</span>
                                        img4(<span class="constant">Size</span>(640, 480),
                                        <span class="constant">CV_8UC3</span>);<br>
                                        <span class="comment">//640 x 480, unsigned char, 3-channel</span><br>
    
                                        <span class="constant">Mat</span>
                                        img7(<span class="constant">Size</span>(640, 480),
                                        <span class="constant">CV_8UC3</span>,
                                        <span class="constant">Scalar</span>(255, 0, 0));<br>
                                        <span class="comment">//initial values, blue</span><br>
    
                                    </code>
                                </div><br>
                                <div class="code">
                                    <code>
                                        <span class="constant">Mat</span>
                                        img2(480, 640,
                                        <span class="constant">CV_8UC1</span>);<br>
                                        <span class="comment">//640 x 480, unsigned char, 1-channel</span><br>
    
                                        <span class="constant">Mat</span>
                                        img5(480, 640,
                                        <span class="constant">CV_8UC1</span>,
                                        <span class="constant">Scalar</span>(128));<br>
                                        <span class="comment">//initial values, 128</span><br>
    
                                        <span class="constant">Mat</span>
                                        img3(480, 640,
                                        <span class="constant">CV_8UC3</span>);<br>
                                        <span class="comment">//640 x 480, unsigned char, 3-channel</span><br>
    
                                        <span class="constant">Mat</span>
                                        img6(480, 640,
                                        <span class="constant">CV_8UC1</span>,
                                        <span class="constant">Scalar</span>(0, 0, 255));<br>
                                        <span class="comment">//initial values, red</span><br>
                                    </code>
                                </div>
                            </details>

                            <details> <!-- create() 생성 -->
                                <summary>이미 생성된 Mat 새로 바꾸기</summary><br>
                                create()<br>
                                <div class="code">
                                    <code>
                                        mat4.create(256, 256,
                                        <span class="constant">CV_8UC3</span>);<br>
                                        mat5.create(4, 4,
                                        <span class="constant">CV_32FC1</span>);
                                    </code>
                                </div>
                            </details>
                        </details>

                        <details> <!-- Mat 객체 정보 받기-->
                            <summary>Mat 객체 정보 받기</summary>
                            <br>
                            <div class="code">
                                <code>
                                    <span class="constant">Mat</span> img1 = imread(<span class="string">"lenna.bmp"</span>);<br><br>
                                    <span class="comment">//세로 크기</span><br>
                                    cout <span class="constant">&lt;&lt;</span>
                                    <span class="string">"Width : "</span>
                                    <span class="constant">&lt;&lt;</span>
                                    img1.cols 
                                    <span class="constant">&lt;&lt;</span>
                                    endl;<br>
                                    <span class="comment">//가로 크기</span><br>
                                    cout <span class="constant">&lt;&lt;</span>
                                    <span class="string">"Height : "</span>
                                    <span class="constant">&lt;&lt;</span>
                                    img1.rows 
                                    <span class="constant">&lt;&lt;</span>
                                    endl;
                                </code>
                            </div><br>
                            <ul>
                                <li>Mat::rows로 세로 길이 받아 올 수 있음</li>
                                <li>Mat::cols로 가로 길이 받아 올 수 있음</li>
                                <li>Mat::data로 행렬 원소가 저장된 메모리 시작 주소를 얻어 올 수 있음</li>
                                <li>추가 함수는 하단표 참고<br>
                                    <table border="1px" style="font-size:3px">
                                        <thead style="background-color: blanchedalmond; color:black">
                                            <tr><th>Mat Class Member func</th><th>설명</th></tr>
                                        </thead>
                                        <tr><td>channels()</td><td>채널 수 반환(int)</td></tr>
                                        <tr><td>depth()</td><td>행렬 깊이 반환(int)</td></tr>
                                        <tr><td>elemSize()</td><td>한 개 원소가 차지하는 메모리 byte 반환(size_t)<br>CV_32SC3은 4x3=12</td></tr>
                                        <tr><td>elemSize1()</td><td>한 채널에서 한 개 원소가 차지하는 메모리 byte 반환(size_t)<br>CV_32SC3은 4x3=12</td></tr>
                                        <tr><td>empty()</td><td>비어 있으면 true 반환(bool)</td></tr>
                                        <tr><td>isContinuous()</td><td>각 행 원소가 연속적 저장인 경우 true(bool)</td></tr>
                                        <tr><td>isSubmatrix()</td><td>해당 행렬이 다른 행렬의 부분행렬인 경우 ture 반환(bool)</td></tr>
                                        <tr><td>size()</td><td>크기 반환(Size)</td></tr>
                                        <tr><td>total()</td><td>전체 원소 개수 반환(size_t)</td></tr>
                                        <tr><td>type()</td><td>행렬 타입 반환(ex : CV_32FC1, CV_8UC3)</td></tr>
                                    </table>
                                </li>
                            </ul>
                        </details>

                        <details> <!-- Mat 연산-->
                            <summary>Mat 연산</summary>
                            <table border="1px" style="font-size:3px">
                                        <thead style="background-color: blanchedalmond; color:black">
                                            <tr><th>Mat Class Operation</th><th>설명</th></tr>
                                        </thead>
                                        <tr>
                                            <td>
                                                mat3 = mat1 + mat2;<br>
                                                mat3 = mat1 - mat2;
                                            </td>
                                            <td>두 행렬간 덧셈 뺄셈 진행</td>
                                        </tr>
                                        <tr>
                                            <td>
                                                mat3 = mat1 + s1;<br>
                                                mat3 = mat1 - s2;<br>
                                                mat3 = s1 + mat1;<br>
                                                mat3 = s2 - mat1;
                                            </td>
                                            <td>행렬에 Scalar 값 전체 연산<br>(Brightness에 활용)</td>
                                        </tr>
                                        <tr>
                                            <td>
                                                mat3 = -mat1;
                                            </td>
                                            <td>-1 곱셉</td>
                                        </tr>
                                        <tr>
                                            <td>
                                                mat3 = mat1 * mat2;<br>
                                                mat3 = mat1 / mat2;
                                            </td>
                                            <td>두 행렬간 행렬 곱,<br>같은 위치 원소끼리 나눗셈 실행</td>
                                        </tr>
                                        <tr>
                                            <td>
                                                mat3 = mat1 * d1;<br>
                                                mat3 = d1 * mat1;<br>
                                                mat3 = mat1 / d1;<br>
                                                mat3 = d1 / mat1;
                                            </td>
                                            <td>행렬에 실수 곱, 나눗셈 실행<br>(Contrast에 활용)</td>
                                        </tr>
                                        <tr>
                                            <td>
                                                mat3 = mat1.mul(mat2, s1)
                                            </td>
                                            <td>두 행렬간 행렬 곱이 아닌<br>같은 위치 원소끼리 곱셈 실행</td>
                                        </tr>
                                        <tr>
                                            <td>
                                                mat3 = mat1.inv(method)
                                            </td>
                                            <td>
                                                역행렬 구하기(255-pixel)<br>
                                                method에는 <br>
                                                DECOMP_LU, DECOMP_SVD, DECOMP_EIG, DECOMP_CHOLESKY<br>
                                                중 지정 가능
                                            </td>
                                        </tr>
                                        <tr>
                                            <td>
                                                mat3 = mat1.t()
                                            </td>
                                            <td>
                                                행렬의 전치 행렬(행, 열 위치 교환)
                                            </td>
                                        </tr>
                                    </table>
                        </details>

                    </details>
                </li>

                <li><!-- Vec Class -->
                    <details>
                        <summary>Vec Class</summary>
                        <br>
                        Matx Class의 상속을 받아 생성<br>
                        template 사용으로 자료형과 데이터 수 명시 필수<br>
                        ex) Vec&lt;uchar, 3&gt; : 3채널 컬러 영상으로 사용<br>
                        <div class="code">
                            <code>
                                <span class="constant">Vec</span>
                                &lt;<span class="constant">uchar</span>,
                                3&gt; p1, p2(0, 0, 255);
                            </code>
                        </div>
                        매번 쓰기 힘들기 때문에 이름 재정의를 사용<br>
                        Vec&lt;num-of-data&gt; {b|s|w|i|f|d}<br>
                        num-of-data에 숫자 지정<br>
                        {b|s|w|i|f|d}에 문자 하나 지정<br>
                        <ul>
                            <li>b : uchar</li>
                            <li>s : short</li>
                            <li>w : ushort</li>
                            <li>i : int</li>
                            <li>f : float</li>
                            <li>d : double</li>
                        </ul>
                        <div class="code">
                            <code>
                                <span class="def">typedef</span>
                                <span class="constant">Vec</span>&lt;<span class="constant">uchar</span>,
                                2&gt; <span class="constant">Vec2b;</span><br>
                                <span class="def">typedef</span>
                                <span class="constant">Vec</span>&lt;<span class="constant">uchar</span>,
                                3&gt; <span class="constant">Vec3b;</span>
                                <span class="comment">//3채널 컬러영상에서 자주 사용</span>
                                <br>
                                <span class="def">typedef</span>
                                <span class="constant">Vec</span>&lt;<span class="constant">uchar</span>,
                                4&gt; <span class="constant">Vec4b;</span><br><br>

                                <span class="def">typedef</span>
                                <span class="constant">Vec</span>&lt;<span class="constant">short</span>,
                                2&gt; <span class="constant">Vec2s;</span><br>
                                <span class="def">typedef</span>
                                <span class="constant">Vec</span>&lt;<span class="constant">short</span>,
                                3&gt; <span class="constant">Vec3s;</span><br>
                                <span class="def">typedef</span>
                                <span class="constant">Vec</span>&lt;<span class="constant">short</span>,
                                4&gt; <span class="constant">Vec4s;</span><br><br>
                                
                                <span class="def">typedef</span>
                                <span class="constant">Vec</span>&lt;<span class="constant">ushort</span>,
                                2&gt; <span class="constant">Vec2w;</span><br>
                                <span class="def">typedef</span>
                                <span class="constant">Vec</span>&lt;<span class="constant">ushort</span>,
                                2&gt; <span class="constant">Vec3w;</span><br>
                                <span class="def">typedef</span>
                                <span class="constant">Vec</span>&lt;<span class="constant">ushort</span>,
                                2&gt; <span class="constant">Vec4w;</span><br><br>
                                
                                <span class="def">typedef</span>
                                <span class="constant">Vec</span>&lt;<span class="def">int</span>,
                                2&gt; <span class="constant">Vec2i;</span><br>
                                <span class="def">typedef</span>
                                <span class="constant">Vec</span>&lt;<span class="def">int</span>,
                                3&gt; <span class="constant">Vec3i;</span><br>
                                <span class="def">typedef</span>
                                <span class="constant">Vec</span>&lt;<span class="def">int</span>,
                                4&gt; <span class="constant">Vec4i;</span><br>
                                <span class="def">typedef</span>
                                <span class="constant">Vec</span>&lt;<span class="def">int</span>,
                                6&gt; <span class="constant">Vec6i;</span><br>
                                <span class="def">typedef</span>
                                <span class="constant">Vec</span>&lt;<span class="def">int</span>,
                                8&gt; <span class="constant">Vec8i;</span><br><br>
                                
                                <span class="def">typedef</span>
                                <span class="constant">Vec</span>&lt;<span class="def">float</span>,
                                2&gt; <span class="constant">Vec2f;</span><br>
                                <span class="def">typedef</span>
                                <span class="constant">Vec</span>&lt;<span class="def">float</span>,
                                3&gt; <span class="constant">Vec3f;</span><br>
                                <span class="def">typedef</span>
                                <span class="constant">Vec</span>&lt;<span class="def">float</span>,
                                4&gt; <span class="constant">Vec4f;</span><br>
                                <span class="def">typedef</span>
                                <span class="constant">Vec</span>&lt;<span class="def">float</span>,
                                6&gt; <span class="constant">Vec6f;</span><br><br>
                                
                                <span class="def">typedef</span>
                                <span class="constant">Vec</span>&lt;<span class="def">double</span>,
                                2&gt; <span class="constant">Vec2d;</span><br>
                                <span class="def">typedef</span>
                                <span class="constant">Vec</span>&lt;<span class="def">double</span>,
                                3&gt; <span class="constant">Vec3d;</span><br>
                                <span class="def">typedef</span>
                                <span class="constant">Vec</span>&lt;<span class="def">double</span>,
                                4&gt; <span class="constant">Vec4d;</span><br>
                                <span class="def">typedef</span>
                                <span class="constant">Vec</span>&lt;<span class="def">double</span>,
                                6&gt; <span class="constant">Vec6d;</span><br>
                            </code>
                        </div>
                        <div class="code">
                            <code>
                                <span class="constant">Vec3b</span> p1, p2(0, 0, 255);
                                <span class="comment">//p2(B, G, R) 순임</span><br>
                                <span class="comment">//p1은 p1.val 배열 원소가 모두 0</span><br>
                                <span class="comment">//p2.val[0]은 0 p2.val[1]은 0 p2.val[2]은 255로 초기화</span><br>
                                p1.val[0] = 100;<br>
                                <span class="comment">//해당 코드로 첫 번째 원소를 100으로 초기화 가능</span><br>
                                p1[0] = 100;<br>
                                <span class="comment">//위와 동일함</span><br><br>
                                cout
                                <span class="constant">&lt;&lt;</span>
                                <span class="string">"p1 : "</span>
                                <span class="constant">&lt;&lt;</span>
                                p1
                                <span class="constant">&lt;&lt;</span>
                                endl;<br>
                                cout
                                <span class="constant">&lt;&lt;</span>
                                <span class="string">"p2 : "</span>
                                <span class="constant">&lt;&lt;</span>
                                p2
                                <span class="constant">&lt;&lt;</span>
                                endl;<br>
                                <span class="comment">//출력 결과</span><br>
                                <span class="comment">//p1 : [100, 0, 0]</span><br>
                                <span class="comment">//p2 : [0, 0, 255]</span>                              
                            </code>
                        </div>
                    </details>
                </li>

                <li><!-- Scalar Class -->
                    <details>
                        <summary>Scalar Class</summary>
                        <br>
                        Scalar Class는 Scalar_ Class의 상속을 받아 생성<br>
                        Scalar_ Class는 Vec Class의 상속을 받아 생성<br>
                        4개의 원소로 구성<br><br>

                        GrayScale 영상은 1번 원소가 밝기 나머지 3개 원소는 0<br>
                        TrueColor 영상은 1~3번 원소가 색, 나머지 1개 원소는 0임<br>
                        알파 채널 존재 시 4번째 원소도 사용<br>
                        <div class="code">
                            <code>
                               <span class="constant">Scalar</span> gray = 128;<br>
                               cout
                               <span class="constant">&lt;&lt;</span>
                               <span class="string">"gray : "</span>
                               <span class="constant">&lt;&lt;</span>
                               gray
                               <span class="constant">&lt;&lt;</span>
                               endl;<br>
                               <span class="comment">//출력 결과</span><br>
                               <span class="comment">//gray : [128, 0, 0, 0]</span><br>
                               <br>
                               
                               <span class="constant">Scalar</span> yellow = (0, 255, 255);<br>
                               cout
                               <span class="constant">&lt;&lt;</span>
                               <span class="string">"yellow : "</span>
                               <span class="constant">&lt;&lt;</span>
                               yellow
                               <span class="constant">&lt;&lt;</span>
                               endl;<br>
                               <span class="comment">//출력 결과</span><br>
                               <span class="comment">//yellow : [0, 255, 255, 0]</span><br>
                               <br>

                               <span class="constant">Mat</span> img1(256, 256,
                               <span class="constant">CV_8UC3</span>, yellow);<br><br>
                               <span class="def">for</span>
                               (<span class="def">int</span> i = 0; i &lt; 4; i++)<br>&nbsp;&nbsp;&nbsp;
                               cout
                               <span class="constant">&lt;&lt;</span>
                               yellow[i]
                               <span class="constant">&lt;&lt;</span>
                               endl;<br>
                               <span class="comment">//출력 결과</span><br>
                               <span class="comment">//0</span><br>
                               <span class="comment">//255</span><br>
                               <span class="comment">//255</span><br>
                               <span class="comment">//0</span>
                            </code>
                        </div>
                    </details>
                </li>

                <li><!-- VideoCapture Class -->
                    <details>
                        <summary>VideoCapture Class</summary>
                        <br>
                        VideoCapture Class로 카메라, 동영상 받아오기 가능
                        <div class="code">
                            <code>
                               <span class="def">class</span>
                               <span class="constant">VideoCapture</span>{<br>
                                <span class="def">public</span>:<br>&nbsp;&nbsp;&nbsp;
                                VideoCapture();<br>&nbsp;&nbsp;&nbsp;
                                <span class="comment">//Default Constructor</span><br>&nbsp;&nbsp;&nbsp;
                                VideoCpature(<span class="def">const</span> <span class="constant">String</span>&
                                <span class="string">filename</span>, <span class="def">int</span>
                                <span class="string">apiPreference</span> = <span class="constant">CAP_ANY</span>);<br>&nbsp;&nbsp;&nbsp;
                                VideoCpature(<span class="def">int</span>
                                <span class="string">index</span>, <span class="def">int</span>
                                <span class="string">apiPreference</span> = <span class="constant">CAP_ANY</span>);<br>&nbsp;&nbsp;&nbsp;
                                <span class="def">virtual</span> ~VideoCapture();<br><br>&nbsp;&nbsp;&nbsp;
                                
                                <span class="def">virtual bool</span>
                                open(<span class="def">const</span>
                                <span class="constant">String</span>&
                                <span class="string">filename</span>, <span class="def">int</span> <span class="string">apiPreference</span>
                                = <span class="constant">CAP_ANY</span>);<br>&nbsp;&nbsp;&nbsp;
                                <span class="def">virtual bool</span>
                                open(<span class="def">int</span>
                                <span class="string">index</span>, <span class="def">int</span> <span class="string">apiPreference</span>
                                = <span class="constant">CAP_ANY</span>);<br>&nbsp;&nbsp;&nbsp;
                                <span class="def">virtual bool</span>
                                isOpened() <span class="def">const</span>;<br>&nbsp;&nbsp;&nbsp;
                                <span class="comment">//mount 확인에 사용</span>
                                <br>&nbsp;&nbsp;&nbsp;
                                <span class="def">virtual void</span> realease();<br><br>&nbsp;&nbsp;&nbsp;
                                
                                <span class="def">virtual bool</span> grab();<br>&nbsp;&nbsp;&nbsp;
                                <span class="def">virtual bool</span> retrieve(
                                <span class="constant">OutputArray</span>
                                <span class="string">image</span>,
                                <span class="def">int</span>
                                <span class="string">flag</span> = 0);<br><br>&nbsp;&nbsp;&nbsp;

                                <span class="def">virtual</span>
                                <span class="constant">VideoCapture</span>&
                                <span class="constant">operator &gt;&gt;</span>
                                (<span class="constant">Mat</span>&
                                <span class="string">image</span>);<br>&nbsp;&nbsp;&nbsp;
                                <span class="comment">//Operator 재정의로 바로 1frame씩 받기가 가능</span>
                                <br>&nbsp;&nbsp;&nbsp;
                                <span class="def">virtual bool</span>
                                read(<span class="constant">OutputArray</span>
                                <span class="string">image</span>);<br><br>&nbsp;&nbsp;&nbsp;

                                <span class="def">virtual bool</span>
                                set(<span class="def">int</span>
                                <span class="string">propId</span>,
                                <span class="def">double</span>
                                <span class="string">value</span>);<br>&nbsp;&nbsp;&nbsp;
                                <span class="def">virtual double</span>
                                get(<span class="def">int</span>
                                <span class="string">propId</span>
                                <span class="constant">const</span>);<br>&nbsp;&nbsp;&nbsp;
                                ...<br>
                               }
                            </code>
                        </div>

                        VideoCapture 관련 함수<br>
                        <ul>
                            <li>
                                <a href="#videoframeload">프레임 읽기 사용 예시</a> 참고</li><br>
                            <li>
                                <details> <!-- VideoCapture(), open() -->
                                    <summary>동영상, 카메라 부르기 VideoCapture(), open()</summary>
                                    <div class="code">
                                        <code>
                                            <span class="comment">//영상 불러오기</span>
                                            <span class="constant">VideoCapture</span>::VideoCapture(<span class="def">const</span>
                                            <span class="constant">String</span>&
                                            <span class="string">filename</span>,
                                            <span class="def">int</span>
                                            <span class="string">apiPreference</span> =
                                            <span class="constant">CAP_ANY</span>);<br>
                                            <span class="def">bool</span>
                                            <span class="constant">VideoCapture</span>::open(<span class="def">const</span>
                                            <span class="constant">String</span>&
                                            <span class="string">filename</span>,
                                            <span class="def">int</span>
                                            <span class="string">apiPreference</span> =
                                            <span class="constant">CAP_ANY</span>);<br><br>

                                            <span class="comment">//카메라 사용</span><br>
                                            <span class="constant">VideoCapture</span>::VideoCapture(<span class="def">int</span>
                                            <span class="string">index</span>,
                                            <span class="def">int</span>
                                            <span class="string">apiPreference</span> =
                                            <span class="constant">CAP_ANY</span>);<br>
                                            <span class="def">bool</span>
                                            <span class="constant">VideoCapture</span>::open(<span class="def">int</span>
                                            <span class="string">index</span>,
                                            <span class="def">int</span>
                                            <span class="string">apiPreference</span> =
                                            <span class="constant">CAP_ANY</span>);<br>
                                        </code>
                                    </div>
                                    <ul>
                                        <li>filename : 영상 파일 이름.확장자명</li>
                                        <li>apiPreference : 사용할 API 백엔드</li>
                                        <li>현재로썬 Default 사용해도 문제없음, 문제 발생 시 지정</li>
                                        <li>return 값 : 열리면 true, 실패하면 false</li>
                                        <li>index : filename 대신 숫자 입력 시 해당 ID의 카메라 연결</li>
                                        <li>보통 기본 카메라는 0</li>
                                        <hr>
                                        <li>생성자로 객체 생성 후 open() 호출</li>
                                    </ul>
                                </details>
                            </li>

                            <li>
                                <details> <!--isOpened(), release(), >>, read()-->
                                    <summary>isOpened(), release(), &gt;&gt;, read()</summary>
                                    <div class="code">
                                        <code>
                                            <span class="def">bool</span>
                                            <span class="constant">VideoCapture</span>::isOpened()
                                            <span class="def">const</span>;<br>
                                            <span class="comment">//카메라, 영상 사용 가능 시 true, 그렇지 않으면 false</span>
                                            <br><br>

                                            <span class="def">virtual void</span>
                                            <span class="constant">VideoCapture</span>::release();<br>
                                            <span class="comment">//카메라 또는 영상 파일이 사용하는 자원 해제</span>
                                            <br><br>

                                            <span class="constant">VideoCapture</span>&
                                            <span class="constant">VideoCapture</span>::<span class="constant">operator &gt;&gt;</span>
                                            (<span class="constant">Mat</span>&
                                            <span class="string">image</span>);<br>
                                            <span class="def">bool</span>
                                            <span class="constant">VideoCapture</span>::read(<span class="constant">OutputArray</span>
                                            <span class="string">image</span>);<br>
                                            <span class="comment">//프레임 하나씩 받아오기</span>
                                        </code>
                                    </div>
                                </details>
                            </li>

                            <li>
                                <details> <!--get(), set()-->
                                    <summary>get(), set()</summary>
                                    <div class="code">
                                        <code>
                                            <span class="def">double</span>
                                            <span class="constant">VideoCapture</span>::get(<span class="def">int</span>
                                            <span class="string">propID</span>)
                                            <span class="def">const</span>;<br><br>
                                            <span class="def">bool</span>
                                            <span class="constant">VideoCapture</span>::set(<span class="def">int</span>
                                            <span class="string">propID</span>,
                                            <span class="def">double</span>
                                            <span class="string">value</span>);
                                        </code>
                                    </div>
                                    <ul>
                                        <li>porpID : 속성 ID, VideoCaptureProperties 열거형 중 하나를 지정합니다.</li>
                                        <li>return 값 : 지정한 속성 값 얻지 못하면 0</li><br>
                                        <li>value : 지정할 속성 값</li>
                                        <li>return 값 : 속성 지정 가능하면 true, 불가하면 false</li><br>
                                        <li>
                                            <table border=1px style="font-size:smaller">
                                                <thead style="background-color: blanchedalmond; color:black">
                                                    <tr><th>VideoCaptureProperties</th><th>설명</th></tr>
                                                </thead>
                                                <tbody>
                                                    <tr><td>CAP_PROP_POS_MSEC</td><td>비디오 파일의 현재 위치(ms)</td></tr>
                                                    <tr><td>CAP_PROP_POS_FRAMES</td><td>현재 프레임 위치(ms)</td></tr>
                                                    <tr><td>CAP_PROP_AVI_RATIO</td><td>비디오 길이가 [0, 1] 기준 상대 위치</td></tr>
                                                    <tr style="color:lightpink"><td><b>CAP_PROP_FRAME_WIDTH</b></td><td><b>영상 가로 길이</b></td></tr>
                                                    <tr style="color:lightpink"><td><b>CAP_PROP_FRAME_HEIGHT</b></td><td><b>영상 세로 길이</b></td></tr>
                                                    <tr style="color:lightpink"><td><b>CAP_PROP_FPS</b></td><td><b>초당 프레임 수</b>></td></tr>
                                                    <tr><td>CAP_PROP_FOURCC</td><td>fourcc 코드(코덱 표현 정수 값)</td></tr>
                                                    <tr><td>CAP_PROP_FRAME_COUNT</td><td>비디오 파일 전체 프레임 수</td></tr>
                                                    <tr><td style="text-align: center;" colspan="2">카메라에서만 사용 가능</td></tr>
                                                    <tr><td>CAP_PROP_BRIGHTNESS</td><td>카메라 밝기 조절</td></tr>
                                                    <tr><td>CAP_PROP_CONTRAST</td><td>카메라 명암비 조절</td></tr>
                                                    <tr><td>CAP_PROP_SATURATION</td><td>카메라 채도 조절</td></tr>
                                                    <tr><td>CAP_PROP_HUE</td><td>카메라 색상 조절</td></tr>
                                                    <tr><td>CAP_PROP_GAIN</td><td>카메라 감도 조절</td></tr>
                                                    <tr><td>CAP_PROP_EXPOSURE</td><td>카메라 노출 조절</td></tr>
                                                    <tr><td>CAP_PROP_ZOOM</td><td>카메라 줌 조절</td></tr>
                                                    <tr><td>CAP_PROP_FOCUS</td><td>카메라 초점 조절</td></tr>

                                                </tbody>
                                            </table>
                                        </li>
                                    </ul>
                                </details>
                            </li>
                        </ul>
                    </details>
                </li>

                <li> <!--VideoWriter Class-->
                    <details>
                        <summary>VideoWriter Class</summary>
                        
                        <br>
                        동영상 저장에 사용<br>
                        <a href="#videoframeload">프레임 읽기 사용 예시</a> 참고<br>
                        <div class="code">
                            <code>
                                <span class="constant">VideoWriter</span>::VideoWriter(<span class="def">const</span>
                                <span class="constant">String</span>&
                                <span class="string">filename</span>,
                                <span class="def">int</span>
                                <span class="string">fourcc</span>,<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                                <span class="def">int</span>
                                <span class="string">fps</span>,
                                <span class="constant">Size</span>
                                <span class="string">frameSize</span>,
                                <span class="def">bool</span>
                                <span class="string">isColor</span> = <span class="def">true</span>);<br>
                                <br>
                                <span class="def">bool</span>
                                <span class="constant">VideoWriter</span>::open(<span class="def">const</span>
                                <span class="constant">String</span>&
                                <span class="string">filename</span>,
                                <span class="def">int</span>
                                <span class="string">fourcc</span>,<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                                <span class="def">int</span>
                                <span class="string">fps</span>,
                                <span class="constant">Size</span>
                                <span class="string">frameSize</span>,
                                <span class="def">bool</span>
                                <span class="string">isColor</span> = <span class="def">true</span>);
                            </code>
                        </div>

                        <ul>
                            <li>filename : 저장 영상 이름</li>
                            <li>fourcc : 코덱 표현 문자코드</li>
                            <li>fps : 저장 영상 초당 프레임 수</li>
                            <li>frameSize : 영상 가로, 세로 크기</li>
                            <li>isColor : ture이면 컬러로 false이면 흑백 저장</li>
                            <li>return 값 : open() 성공 시 true, 실패 시 false</li>
                        </ul>

                        VideoWriter 관련 함수<br>
                        <ul>
                            <li>
                                <details> <!-- fourcc() -->
                                    <summary>fourcc()</summary>
                                    <div class="code">
                                        <code>
                                            <span class="def">static</span>
                                            <span class="def">int</span>
                                            <span class="constant">VideoWriter</span>::fourcc(
                                            <span class="def">char</span>
                                            <span class="string">c1</span>,
                                            <span class="def">char</span>
                                            <span class="string">c2</span>,
                                            <span class="def">char</span>
                                            <span class="string">c3</span>,
                                            <span class="def">char</span>
                                            <span class="string">c4</span>);
                                        </code>
                                    </div>
                                    
                                    <ul>
                                        <li>c1, c2, c3, c4 : 코덱 표현 1byte 문자 4개</li>
                                        <li>return 값 : 정수형 4-문자코드</li><br>
                                        <li>
                                            <table border=1px style="font-size:3px">
                                                <thead style="background-color: blanchedalmond; color:black">
                                                    <tr><th>fourcc 코드 생성 방법</th><th>코덱 설명</th></tr>
                                                </thead>
                                                <tbody>
                                                    <tr><td>VideoWriter::fourcc('D', 'I', 'V', 'X')</td><td>DivX MPEG-4 코덱</td></tr>
                                                    <tr><td>VideoWriter::fourcc('X', 'V', 'I', 'D')</td><td>XVID MPEG-4 코덱</td></tr>
                                                    <tr><td>VideoWriter::fourcc('F', 'M', 'P', '4')</td><td>FFMPEG MPEG4 코덱</td></tr>
                                                    <tr><td>VideoWriter::fourcc('W', 'M', 'V', '2')</td><td>Windows Media Video 8 코덱</td></tr>
                                                    <tr><td>VideoWriter::fourcc('M', 'J', 'P', 'G')</td><td>모션 JPEG 코덱</td></tr>
                                                    <tr><td>VideoWriter::fourcc('Y', 'V', '1', '2')</td><td>YUV 4:2:0 Planar(비압축)</td></tr>
                                                    <tr><td>VideoWriter::fourcc('X', '2', '6', '4')</td><td>H.264/AVC 코덱</td></tr>
                                                    <tr><td>VideoWriter::fourcc('A', 'V', 'C', '1')</td><td>Advanced Video 코덱</td></tr>
                                                </tbody>
                                            </table>
                                        </li>
                                    </ul>
                                </details>
                            </li>

                            <li>
                                <details> <!-- <<, wtire() -->
                                    <summary>&lt;&lt;, write()</summary>
                                    <div class="code">
                                        <code>
                                            <span class="constant">VideoWriter</span>&
                                            <span class="constant">VideoWriter</span>::<span class="constant">operator &lt;&lt;</span>
                                            (<span class="def">const</span>
                                            <span class="constant">Mat</span>&
                                            <span class="string">image</span>);<br>
                                            <span class="def">void</span>&
                                            <span class="constant">VideoWriter</span>::write(<span class="constant">IntpuArray</span>
                                            <span class="string">image</span>);
                                        </code>
                                    </div>
                                    <ul>
                                        <li>image : 추가할 프레임</li>
                                    </ul>
                                </details>
                            </li>
                        </ul>
                    </details>
                </li>

            </ul>
        </div>

        <div class="custom-div-dark"> <!-- 사용 예시 -->
            <h3>사용 예시</h3>
            <ul id="examples">
                <li> <!-- 이미지 읽어오기 -->
                    <details> 
                        <summary>
                            이미지 읽어오기
                        </summary>
                        <div class="code" id="readimg">
                            <code>
                                <span class="constant">Mat</span> img;<br>
                                img <span class="constant">=</span> imread(<span class="string">"파일 경로/파일 이름.확장자명"</span>);
                            </code>
                        </div>
                        <div class="code">
                            <code>
                                <span class="constant">Mat</span> img =</span> imread(<span class="string">"파일 경로/파일 이름.확장자명"</span>);
                            </code>
                        </div>
                        <div class="code">
                            <code>
                                <span class="constant">Mat</span> imgs[3];<br>
                                <span class="function">for</span>
                                (<span class="def">int</span> i = 0; i &lt; 3; i++) {<br> 
                                    &nbsp;&nbsp;&nbsp;&nbsp;
                                    <span class="constant">String</span> filename = format(
                                    <span class="string">"test%02d.bmp"</span>, i + 1);<br>
                                    imgs[i] = imread(filename);
                                }
                            </code>
                        </div>
                    </details>
                </li>

                <li> <!-- 열람 확인 함수 -->
                    <details> 
                        <summary>
                             열림 확인 함수 (중요!)
                        </summary>
                        <div class="code" id="isopend">
                            <code>
                                <span class="function">if</span> (img.empty()) {<br>
                                &nbsp;&nbsp;&nbsp;&nbsp;cerr <span class="constant">&lt;&lt;</span> <span class="string">"Image load failed!"</span> <span class="constant">&lt;&lt;</span> endl;<br>
                                &nbsp;&nbsp;&nbsp;&nbsp;<span class="def">return</span> -1;<br>
                                }
                            </code>
                        </div>
                    </details>
                </li>

                <li> <!-- 이미지 창 띄우기 -->
                    <details>
                        <summary>이미지 창 띄우기</summary>
                        <div class="code" id="imgwindow">
                            <code>
                                namedWindow(<span class="string">"image"</span>);<br>
                                imshow(<span class="string">"image"</span>, img);<br>
                                <br>
                                waitKey(0);<br>
                                <span class="def">return</span> 0;
                            </code>
                        </div>
                    </details>
                </li>

                <li> <!-- 창 닫기 -->
                    <details>
                        <summary>창 닫기</summary>
                        <div class="code" id="windowclosed">
                            <code>
                                waitKey();<br>
                                destroyAllWindows();
                            </code>
                        </div>
                        <ul><li>보통 바로 안 닫히고 어떤 키 입력이 있을 때 까지 대기 후 닫음</li></ul>
                        <div class="code">
                            <code>
                                waitKey();<br>
                                destoryWindow(<span class="string">"닫을 창의 이름"</span>)
                            </code>
                        </div>
                        <div class="code">
                            <code>
                                <span class="def">if</span> (waitKey(delay) == <span class="constant">27</span>) {<br>
                                &nbsp;&nbsp;&nbsp;&nbsp;cout <span class="def">&lt;&lt;</span> <span class="string">"ESC Key pressed. Exit the camera."</span> <span class="def">&lt;&lt;</span> <span class="constant">endl</span>;<br>
                                &nbsp;&nbsp;&nbsp;&nbsp;break;<br>
                                }
                            </code>
                        </div>
                        <ul>
                            <li>esc 키 입력 시 닫히도록</li>
                            <li>여기서 delay는 카메라 작동 시 (10000ms/불러 온 프레임) 만큼 대기 후 esc 키 눌림 확인</li>
                        </ul>
                       
                    </details>
                </li>

                <li> <!-- 창 변형 -->
                    <details>
                        <summary>창 변형</summary>
                        <div class="code" id="modifiedWindow">
                            <code>
                                <span class="comment">//창 생성</span><br>
                                namedWindow(<span class="string">"image"</span>,
                                <span class="constant">WINDOW_NORMAL</span>);<br>
                                <span class="comment">//모니터 좌측 상단 기준 200, 400으로 창 이동</span><br>
                                moveWindow(<span class="string">"image"</span>,
                                <span class="constant">200</span>,
                                <span class="constant">400</span>)<br>
                                <span class="comment">//640 x 480으로 창 크기 변형</span><br>
                                resizedWindow(<span class="string">"image"</span>,
                                <span class="constant">640</span>,
                                <span class="constant">480</span>)<br>
                            </code>
                        </div>
                    </details>
                </li>

                <li> <!-- 복사의 차이 -->
                    <details>
                        <summary>복사의 차이</summary>
                        <div class="code" id="copyimg">
                            <code>
                                <span class="def">void</span>
                                MatOp2()<br>{<br>&nbsp;&nbsp;&nbsp;
                                <span class="constant">Mat</span>
                                img1 = imread(<span class="string">"dog.bmp"</span>);<br>
                                <br>&nbsp;&nbsp;&nbsp;
                                <span class="comment">//얕은 복사 실행 img1 = img2 = img3</span><br>&nbsp;&nbsp;&nbsp;
                                <span class="constant">Mat</span> img2 = img1;<br>&nbsp;&nbsp;&nbsp;
                                <span class="constant">Mat</span> img3;<br>&nbsp;&nbsp;&nbsp;
                                img3 = img1;<br><br>&nbsp;&nbsp;&nbsp;
                                <span class="comment">//깊은 복사 실행 img5 ≠ img4 ≠ img1</span><br>&nbsp;&nbsp;&nbsp;
                                <span class="constant">Mat</span> img4 = img1.clone();<br>&nbsp;&nbsp;&nbsp;
                                <span class="constant">Mat</span> img5;<br>&nbsp;&nbsp;&nbsp;
                                img1.copyTo(img5);<br><br>&nbsp;&nbsp;&nbsp;
                                img1.setTo(<span class="constant">Scalar</span>(0, 255, 255));
                                <span class="comment">//img1 = yellow</span>
                                <br><br>&nbsp;&nbsp;&nbsp;

                                imshow(<span class="string">"img1"</span>, img1);<br>&nbsp;&nbsp;&nbsp;
                                imshow(<span class="string">"img2"</span>, img2);<br>&nbsp;&nbsp;&nbsp;
                                imshow(<span class="string">"img3"</span>, img3);<br>&nbsp;&nbsp;&nbsp;
                                imshow(<span class="string">"img4"</span>, img4);<br>&nbsp;&nbsp;&nbsp;
                                imshow(<span class="string">"img5"</span>, img5);<br>
                                <br>&nbsp;&nbsp;&nbsp;
                                <span class="comment">//img1, img2, img3는 노란 이미지로 바뀜</span>
                                <br>&nbsp;&nbsp;&nbsp;
                                waitKey();
                                <br>&nbsp;&nbsp;&nbsp;
                                destoryAllWindows();
                                <br>}
                            </code>
                        </div>
                    </details>
                </li>

                <li> <!-- 영역 선택(ROI)과 반전 -->
                    <details>
                        <summary>영역 선택(ROI)과 반전</summary>
                        <div class="code" id="areaselect">
                            <code>
                                <span class="def">void</span> MatOp3()<br>
                                {<br>&nbsp;&nbsp;&nbsp;
                                img1 = imread(<span class="string">"cat.bmp"</span>);<br><br>&nbsp;&nbsp;&nbsp;
                                <span class="function">if</span> (img1.empty()) {<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                                cerr <span class="constant">&lt;&lt;</span>
                                <span class="string">"Image load failed!"</span>
                                <span class="constant">&lt;&lt;</span>
                                endl;
                                <br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                                <span class="def">return</span>;
                                <br>&nbsp;&nbsp;&nbsp;
                                }<br><br>&nbsp;&nbsp;&nbsp;
                                <span class="comment">//영상의 (220, 120)부터 340x240 크기 사각형 영상을 얕은 복사</span><br>&nbsp;&nbsp;&nbsp;
                                <span class="constant">Mat</span>
                                img2 = img1(<span class="constant">Rect</span>(220, 120, 340, 240));<br>&nbsp;&nbsp;&nbsp;
                                <span class="comment">//ROI 지정</span><br>&nbsp;&nbsp;&nbsp;
                                <span class="constant">Mat</span>
                                img3 = img1(<span class="constant">Rect</span>(220, 120, 340, 240)).clone();<br>
                                <br>&nbsp;&nbsp;&nbsp;
                                img2 = <span class="constant">~</span>img2;<br>&nbsp;&nbsp;&nbsp;
                                <span class="comment">//img2는 얕은 복사이기에 값을 변경하면 img1에도 영향이 미침</span><br><br>&nbsp;&nbsp;&nbsp;
                                imshow(<span class="string">"img1</span>, img1);<br>&nbsp;&nbsp;&nbsp;
                                imshow(<span class="string">"img2</span>, img2);<br>&nbsp;&nbsp;&nbsp;
                                imshow(<span class="string">"img3</span>, img3);<br><br>&nbsp;&nbsp;&nbsp;
                                waitKey();<br>&nbsp;&nbsp;&nbsp;
                                destoryAllWindows();<br>
                                }<br>
                            </code>
                        </div>

                        <div class="code">
                            <code>
                                <span class="constant">Mat</span>
                                mat1 =
                                <span class="constant">Mat</span>::zeros(3, 4, <span class="constant">CV_8UC1</span>);
                                <br><br>
                                <span class="comment">//이미지 원소 하나하나 전부 접근</span>
                                <br>
                                <span class="function">for</span>
                                (<span class="def">int</span> j = 0; j &lt; mat1.rows; j++)
                                {
                                <br>&nbsp;&nbsp;&nbsp;
                                <span class="function">for</span>(<span class="def">int</span> i = 0; i &lt; mat1.cols; i++)
                                {
                                <br>&nbsp;&nbsp;&nbsp;
                                &nbsp;&nbsp;&nbsp;
                                mat1.at&lt;<span class="constant">uchar</span>&gt;(j, i)++;
                                <span class="comment">//해당 원소에 접근 후 처리할 내용</span>
                                <br>&nbsp;&nbsp;&nbsp;

                                }<br>
                                
                                
                                }
                            </code>
                        </div>

                        <div class="code">
                            <code>
                                <span class="comment">//위와 완전히 동일</span><br>
                                <span class="constant">Mat</span>
                                mat1 =
                                <span class="constant">Mat</span>::zeros(3, 4, <span class="constant">CV_8UC1</span>);
                                <br>
                                <br>
                                <span class="function">for</span>
                                (<span class="def">int</span> j = 0; j &lt; mat1.rows; j++)
                                {
                                <br>&nbsp;&nbsp;&nbsp;
                                <span class="constant">uchar</span>* p = mat1.ptr&lt;<span class="constant">uchar</span>&gt;(j);
                                <br>&nbsp;&nbsp;&nbsp;
                                <span class="function">for</span>(<span class="def">int</span> i = 0; i &lt; mat1.cols; i++)
                                {
                                <br>&nbsp;&nbsp;&nbsp;
                                &nbsp;&nbsp;&nbsp;
                                p[i]++;
                                <span class="comment">//해당 원소에 접근 후 처리할 내용</span>
                                <br>&nbsp;&nbsp;&nbsp;

                                }<br>
                                
                                
                                }
                            </code>
                        </div>
                        

                    </details>
                </li>

                <li> <!-- 이미지 크기와 타입 변경 -->
                    <details>
                        <summary>이미지 크기와 타입 변경</summary>
                        <div class="code" id="typeshapechange">
                            <code>
                                <span class="constant">Mat</span>
                                img1 = imread(<span class="string">"lenna.bmp"</span>,
                                <span class="constant">IMREAD_GRAYSCALE</span>);<br>
                                <span class="comment">//흑백으로 읽은 이미지를 3색으로 타입 변경</span>
                                <br><br>
                                <span class="constant">Mat</span> img1f;<br>
                                img1.converTo(img1f,
                                <span class="constant">CV_8UC3</span>);<br>
                                <span class="comment">//변한건 없어 보이지만 1태널이 3채널로 늘어남</span>
                            </code>
                        </div>
                        <div class="code">
                            <code>
                                <span class="constant">uchar</span>
                                data1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };<br>
                                <span class="constant">Mat</span>
                                mat1(3, 4, <span class="constant">CV_8UC1</span>, data1);<br>
                                <span class="constant">Mat</span>
                                mat2 = mat1.reshape(0, 1);<br><br>

                                cout 
                                <span class="constant">&lt;&lt;</span>
                                <span class="string">"mat1:\n"</span>
                                <span class="constant">&lt;&lt;</span>
                                mat1
                                <span class="constant">&lt;&lt;</span>
                                endl;<br>
                                cout 
                                <span class="constant">&lt;&lt;</span>
                                <span class="string">"mat2:\n"</span>
                                <span class="constant">&lt;&lt;</span>
                                mat2
                                <span class="constant">&lt;&lt;</span>
                                endl;<br>
                                <span class="comment">//mat1:</span><br>
                                <span class="comment">//[  1,  2,  3,  4;</span><br>
                                <span class="comment">//   5,  6,  7,  8;</span><br>
                                <span class="comment">//   9, 10, 11, 12]</span><br><br>
                                <span class="comment">//mat2:</span><br>
                                <span class="comment">//[ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12]</span><br><br>

                                mat1.resize(5, 100);<br>
                                <span class="comment">//mat1:</span><br>
                                <span class="comment">//[  1,  2,  3,  4;</span><br>
                                <span class="comment">//   5,  6,  7,  8;</span><br>
                                <span class="comment">//   9, 10, 11, 12;</span><br>
                                <span class="comment">//100, 100, 100, 100;</span><br>
                                <span class="comment">//100, 100, 100, 100]</span><br><br>

                                <span class="constant">Mat</span>>mat3 =
                                <span class="constant">Mat</span>::ones(1, 4, CV_8UC1) * 255;<br>
                                <span class="comment">//[1, 1, 1, 1] 생성 해 전체에 x255</span><br>
                                mat1.push_bck(mat3);<br>
                                <span class="comment">//mat1:</span><br>
                                <span class="comment">//[  1,  2,  3,  4;</span><br>
                                <span class="comment">//   5,  6,  7,  8;</span><br>
                                <span class="comment">//   9, 10, 11, 12;</span><br>
                                <span class="comment">//100, 100, 100, 100;</span><br>
                                <span class="comment">//100, 100, 100, 100;</span><br>
                                <span class="comment">//255, 255, 255, 255]</span><br>

                                mat1.pop_back(1);<br>
                                <span class="comment">//mat1:</span><br>
                                <span class="comment">//[  1,  2,  3,  4;</span><br>
                                <span class="comment">//   5,  6,  7,  8;</span><br>
                                <span class="comment">//   9, 10, 11, 12;</span><br>
                                <span class="comment">//100, 100, 100, 100;</span><br>
                                <span class="comment">//100, 100, 100, 100]</span><br><br>
                            </code>
                        </div>

                    </details>
                </li>

                <li><!-- 영상에서 프레임 단위 읽어온 후 외부에 저장 -->
                    <details>
                        <summary>영상에서 프레임 단위 읽어온 후 외부에 저장</summary>
                        <div class="code" id="videoframeload">
                            <code>
                                <span class="constant">VideoCapture</span> cap(0);<br><br>
                                <span class="function">if</span> (cap.isOpened()) {<br>&nbsp;&nbsp;&nbsp;
                                    cerr <span class="constant">&lt;&lt;</span>
                                    <span class="string">"Camera load failed!"</span>
                                    <span class="constant">&lt;&lt;</span> endl;<br>&nbsp;&nbsp;&nbsp;
                                    <span class="def">return</span>;<br>
                                }<br>
                                <span class="comment">//카메라 열고 동작 확인</span><br><br>

                                <span class="def">int</span> w = cvRound(cap.get(<span class="constant">CAP_PROP_FRAME_WIDTH</span>));<br>
                                <span class="def">int</span> h = cvRound(cap.get(<span class="constant">CAP_PROP_FRAME_HEIGHT</span>));<br>
                                <span class="def">double</span> fps = cap.get(<span class="constant">CAP_PROP_FPS</span>);<br><br>
                                
                                <span class="def">int</span> delay = cvRound(1000/ fps);<br>
                                <span class="comment">//cap으로부터 가로, 세로 받아와 반올림(cvRound)</span><br>
                                <span class="comment">//cap으로부터 fps(double) 받아 온 뒤 딜레이 프레임 계산 후 반올림</span><br><br>
                                
                                <span class="def">int</span> fourcc =
                                <span class="constant">VideoWriter</span>::fourcc(
                                <span class="string">'D'</span>,
                                <span class="string">'I'</span>,
                                <span class="string">'V'</span>,
                                <span class="string">'X'</span>);<br>
                                <span class="constant">VideoWriter</span> outputVideo(<span class="string">"영상 저장 경로/영상 이름.확장자명"</span>, fourcc, fps, Size(w, h));<br>
                                <span class="comment">//영상을 인코딩할 fourcc 지정 및 저장 객체 생성</span><br>
                                <br>

                                <span class="function">if</span> (outputVideo.isOpened()) {<br>&nbsp;&nbsp;&nbsp;
                                    cerr <span class="constant">&lt;&lt;</span>
                                    <span class="string">"File open failed!"</span>
                                    <span class="constant">&lt;&lt;</span> endl;<br>&nbsp;&nbsp;&nbsp;
                                    <span class="def">return</span>;<br>
                                }<br>
                                <span class="comment">//저장 객체 열림 확인</span><br><br>
                                
                                cout
                                <span class="constant">&lt;&lt;</span>
                                <span class="string">"Frame Width : "</span>
                                <span class="constant">&lt;&lt;</span>
                                w
                                <span class="constant">&lt;&lt;</span>
                                endl;<br>
                                cout
                                <span class="constant">&lt;&lt;</span>
                                <span class="string">"Frame Height : "</span>
                                <span class="constant">&lt;&lt;</span>
                                h
                                <span class="constant">&lt;&lt;</span>
                                endl;<br>
                                <span class="comment">//가로 세로 길이 확인용</span><br><br>

                                <span class="comment">//프레임 당 이미지 받아와서 처리</span><br>
                                <span class="constant">Mat</span> frame, processed_frame;<br>
                                <span class="function">while</span>(<span class="def">true</span>) {<br>&nbsp;&nbsp;&nbsp;
                                cap &gt;&gt; frmae;<br>&nbsp;&nbsp;&nbsp;
                                <span class="function">if</span> (frame.empty()) {<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                                    cerr <span class="constant">&lt;&lt;</span>
                                    <span class="string">"Frame is not exisit"</span>
                                    <span class="constant">&lt;&lt;</span> endl;<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                                    <span class="def">break</span>;<br>&nbsp;&nbsp;&nbsp;
                                }<br><br>&nbsp;&nbsp;&nbsp;
                                <span class="comment">//Image Processing</span><br><br>&nbsp;&nbsp;&nbsp;

                                imshow(<span class="string">frame</span>, frame);<br>&nbsp;&nbsp;&nbsp;
                                imshow(<span class="string">"processed_frame"</span>, processed_frame);<br><br>&nbsp;&nbsp;&nbsp;
                                
                                imshow(<span class="string">frame</span>, frame);<br>&nbsp;&nbsp;&nbsp;
                                imshow(<span class="string">"processed_frame"</span>, processed_frame);<br>&nbsp;&nbsp;&nbsp;
                                <span class="comment">//기존 카메라 영상과 후처리 영상 창을 이동해서 보여줌</span><br><br>&nbsp;&nbsp;&nbsp;
                                
                                <span class="function">if</span>(waitKey(10) == 27) {<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                                cout
                                <span class="constant">&lt;&lt;</span>
                                <span class="string">"ESC Key Pressed. Exit The Camera"</span>
                                <span class="constant">&lt;&lt;</span>
                                endl;<br>&nbsp;&nbsp;&nbsp;
                                }<br>&nbsp;&nbsp;&nbsp;
                                destoryAllWindows();<br>
                                }
                            </code>
                        </div>

                    </details>
                </li>

                <li> <!-- 마우스 클릭 시 해당 좌표 출력 -->
                    <details>
                        <summary>마우스 클릭 시 해당 좌표 출력</summary>
                        <div class="code" id="mouseClickevent">
                            <code>
                                <span class="comment">#include</span>
                                <span class="string">"opencv2/opencv.hpp"</span><br>
                                <span class="comment">#include</span>
                                <span class="string">&lt;iostream&gt;</span><br><br>

                                <span class="def">using namespace</span> cv;<br>
                                <span class="def">using namespace</span> std;<br><br>

                                <span class="constant">Mat</span> img;<br>
                                <span class="constant">Point</span> ptOld;<br>
                                <span class="def">void</span> on_mouse(<span class="def">int</span>
                                event,
                                <span class="def">int</span> x,
                                <span class="def">int</span> y,
                                <span class="def">int</span> flags,
                                <span class="def">void</span>*);<br><br>

                                <span class="def">int</span>
                                main(<span class="def">void</span>) { <br>&nbsp;&nbsp;&nbsp;
                                img = imread(<span class="string">"lenna.bmp"</span>);<br><br>&nbsp;&nbsp;&nbsp;

                                <span class="function">if</span> (img.empty()) {<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                                        cerr
                                        <span class="constant">&lt;&lt;</span>
                                        <span class="string">"Image load failed!"</span>
                                        <span class="constant">&lt;&lt;</span>
                                        endl;<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                                        <span class="def">return</span> -1;<br>&nbsp;&nbsp;&nbsp;
                                    }<br><br>&nbsp;&nbsp;&nbsp;
                                
                                namedWindow(<span class="string">"img"</span>);<br>&nbsp;&nbsp;&nbsp;
                                setMouseCallBack(<span class="string">"img"</span>, on_mouse);<br><br>&nbsp;&nbsp;&nbsp;

                                imshow(<span class="string">"img"</span>, img);<br>&nbsp;&nbsp;&nbsp;
                                waitKey(0);<br>&nbsp;&nbsp;&nbsp;

                                <span class="def">return</span> 0;<br>
                                }<br><br>

                                <span class="def">void</span> on_mouse(<span class="def">int</span> event,
                                <span class="def">int</span> x,
                                <span class="def">int</span> y,
                                <span class="def">int</span> flags,
                                <span class="def">void</span>*) {<br>&nbsp;&nbsp;&nbsp;
                                <span class="def">switch</span>(event){<br>&nbsp;&nbsp;&nbsp;
                                    <span class="def">case</span>
                                    <span class="constant">EVENT_LBUTTONDOWN</span>:<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                                    ptOld = <span class="constant">Point</span>(x, y);<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                                    cout
                                    <span class="constant">&lt;&lt;</span>
                                    <span class="string">"EVENT_LBUTTONDOWN: "</span>
                                    <span class="constant">&lt;&lt;</span>
                                    x
                                    <span class="constant">&lt;&lt;</span>
                                    <span class="string">", "</span>
                                    <span class="constant">&lt;&lt;</span>
                                    y
                                    <span class="constant">&lt;&lt;</span>
                                    endl;<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                                    <span class="def">break</span>;<br>&nbsp;&nbsp;&nbsp;

                                    <span class="def">case</span>
                                    <span class="constant">EVENT_LBUTTONUP</span>:<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                                    ptOld = <span class="constant">Point</span>(x, y);<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                                    cout
                                    <span class="constant">&lt;&lt;</span>
                                    <span class="string">"EVENT_LBUTTONUP: "</span>
                                    <span class="constant">&lt;&lt;</span>
                                    x
                                    <span class="constant">&lt;&lt;</span>
                                    <span class="string">", "</span>
                                    <span class="constant">&lt;&lt;</span>
                                    y
                                    <span class="constant">&lt;&lt;</span>
                                    endl;<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                                    <span class="def">break</span>;<br>&nbsp;&nbsp;&nbsp;

                                    <span class="def">case</span>
                                    <span class="constant">EVENT_MOUSEMOVE</span>:<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                                    <span class="function">if</span> (flags & <span class="constant">EVENT_FLAG_LBUTTON</span>) {<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                                        <span class="comment">//플래그 값 중 해당 상수와 같은 상태일 때(논리 연산 사용)</span><br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                                        line(img, ptOld,
                                        <span class="constant">Point</span>(x, y),
                                        <span class="constant">Scalar</span>(0, 255, 255), 2);<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                                        <span class="comment">//선 약간 그리기</span><br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                                        imshow(<span class="string">"img"</span>, img);<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                                        ptOld = <span class="constant">Point</span>(x, y);<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                                        <span class="comment">//계속 갱신하면서 조금씩 그리기</span><br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                                    }<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                                    <span class="def">break</span>;<br>&nbsp;&nbsp;&nbsp;

                                    <span class="def">default</span>:<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                                    <span class="def">break</span>;<br>&nbsp;&nbsp;&nbsp;
                                    }   <br>
                                }
                                
                                
                            </code>
                        </div>
                    </details>
                </li>

                <li> <!-- 마우스 클릭 시 사각형 그리기 -->
                    <details>
                        <summary>마우스 클릭 시 사각형 그리기</summary>
                        <div class="code" id="mouseClickRectevent">
                            <code>
                                <span class="comment">#include</span>
                                <span class="string">"opencv2/opencv.hpp"</span><br>
                                <span class="comment">#include</span>
                                <span class="string">&lt;iostream&gt;</span><br><br>

                                <span class="def">using namespace</span> cv;<br>
                                <span class="def">using namespace</span> std;<br><br>

                                <span class="constant">Mat</span> img;<br>
                                <span class="constant">Point</span> ptOld;<br>
                                <span class="def">void</span> on_mouse(<span class="def">int</span>
                                event,
                                <span class="def">int</span> x,
                                <span class="def">int</span> y,
                                <span class="def">int</span> flags,
                                <span class="def">void</span>*);<br><br>

                                <span class="def">int</span>
                                main(<span class="def">void</span>) { <br>&nbsp;&nbsp;&nbsp;
                                img = imread(<span class="string">"lenna.bmp"</span>);<br><br>&nbsp;&nbsp;&nbsp;

                                <span class="function">if</span> (img.empty()) {<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                                        cerr
                                        <span class="constant">&lt;&lt;</span>
                                        <span class="string">"Image load failed!"</span>
                                        <span class="constant">&lt;&lt;</span>
                                        endl;<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                                        <span class="def">return</span> -1;<br>&nbsp;&nbsp;&nbsp;
                                    }<br><br>&nbsp;&nbsp;&nbsp;
                                
                                namedWindow(<span class="string">"img"</span>);<br>&nbsp;&nbsp;&nbsp;
                                setMouseCallBack(<span class="string">"img"</span>, on_mouse);<br><br>&nbsp;&nbsp;&nbsp;

                                imshow(<span class="string">"img"</span>, img);<br>&nbsp;&nbsp;&nbsp;
                                waitKey(0);<br>&nbsp;&nbsp;&nbsp;

                                <span class="def">return</span> 0;<br>
                                }<br><br>

                                <span class="comment">//사각형 그리는 함수</span><br>
                                <span class="comment">//두 점의 x, y값 대소비교해 사각형 그리기</span><br>
                                <span class="def">void</span>
                                draw_rect(<span class="constant">Mat</span> img,
                                <span class="def">int</span> x1,
                                <span class="def">int</span> y1,
                                <span class="def">int</span> x2,
                                <span class="def">int</span> y2) {<br>&nbsp;&nbsp;&nbsp;
                                <span class="constant">Point</span>
                                startPt =
                                <span class="constant">Point</span>(min(x1, x2), min(y1, y2));<br>&nbsp;&nbsp;&nbsp;
                                <span class="constant">Point</span>
                                endPt =
                                <span class="constant">Point</span>(max(x1, x2), max(y1, y2));<br>&nbsp;&nbsp;&nbsp;
                                <span class="constant">Scalar</span> red(0, 0, 255);<br><br>&nbsp;&nbsp;&nbsp;

                                rectangle(img, startPt, endPt, red, 2);<br>
                                }<br><br>

                                <span class="def">void</span> on_mouse(<span class="def">int</span> event,
                                <span class="def">int</span> x,
                                <span class="def">int</span> y,
                                <span class="def">int</span> flags,
                                <span class="def">void</span>*) {<br>&nbsp;&nbsp;&nbsp;
                                <span class="def">switch</span>(event){<br>&nbsp;&nbsp;&nbsp;
                                    <span class="def">case</span>
                                    <span class="constant">EVENT_LBUTTONDOWN</span>:<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                                    ptOld = <span class="constant">Point</span>(x, y);<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                                    cout
                                    <span class="constant">&lt;&lt;</span>
                                    <span class="string">"EVENT_LBUTTONDOWN: "</span>
                                    <span class="constant">&lt;&lt;</span>
                                    x
                                    <span class="constant">&lt;&lt;</span>
                                    <span class="string">", "</span>
                                    <span class="constant">&lt;&lt;</span>
                                    y
                                    <span class="constant">&lt;&lt;</span>
                                    endl;<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                                    <span class="def">break</span>;<br>&nbsp;&nbsp;&nbsp;

                                    <span class="def">case</span>
                                    <span class="constant">EVENT_LBUTTONUP</span>:<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                                    cout
                                    <span class="constant">&lt;&lt;</span>
                                    <span class="string">"EVENT_LBUTTONUP: "</span>
                                    <span class="constant">&lt;&lt;</span>
                                    x
                                    <span class="constant">&lt;&lt;</span>
                                    <span class="string">", "</span>
                                    <span class="constant">&lt;&lt;</span>
                                    y
                                    <span class="constant">&lt;&lt;</span>
                                    endl;<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                                    draw_rect(img, ptOld.x, ptOld.y, x, y);<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                                    <span class="comment">//마우스 왼버튼 올라가면 임시 이미지가 아닌 원래 이미지에 안착</span><br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                                    <span class="def">break</span>;<br>&nbsp;&nbsp;&nbsp;

                                    <span class="def">case</span>
                                    <span class="constant">EVENT_MOUSEMOVE</span>:<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                                    <span class="function">if</span> (flags & <span class="constant">EVENT_FLAG_LBUTTON</span>) {<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                                        <span class="comment">//마우스 왼버튼 누른 상태일 때</span><br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                                        <span class="constant">Mat</span>
                                        temp_img = img.clone();<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                                        draw_rect(temp_img, ptOld.x, ptOld.y, x, y);<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                                        imshow(<span class="string">"img"</span>, temp_img);<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                                        <span class="comment">//원래 이미지 복사해 임시 이미지에 그림</span><br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                                        <span class="comment">//원래 이미지에 그려진 곳에 또 그리게 되어 엄청 많이 그려짐</span><br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                                    }<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                                    <span class="def">break</span>;<br>&nbsp;&nbsp;&nbsp;

                                    <span class="def">default</span>:<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                                    <span class="def">break</span>;<br>&nbsp;&nbsp;&nbsp;
                                    }   <br>
                                }
                                
                                
                            </code>
                        </div>
                    </details>
                </li>
            </ul>
        </div>

        <div class="tooltips"> <!-- 각주들 -->
            <div id="imread_ex" class="tooltip"> <!-- imread() 각주 -->
                파일 읽어오기<a href="#readimg">(사용 예시)</a>
            </div>
    
            <div id="imwrite_ex" class="tooltip"> <!-- imwrite() 각주 -->
                파일 저장하기
            </div>
    
            <div id="empty_ex" class="tooltip"> <!-- empty() 각주 -->
                Mat 객체가 비었는가 확인<a href="#isopend">(사용 예시)</a>
            </div>
    
            <div id="namedWindow_ex" class="tooltip"> <!-- namedWindow() 각주 -->
                윈도우 창 띄우기<a href="#imgwindow">(사용 예시)</a>
            </div>
    
            <div id="destoryWindow_funs_ex" class="tooltip"> <!-- destoryWindow() & destoryAllWindows() 각주 -->
                윈도우 창 닫기<a href="#windowclosed">(사용 예시)</a>
            </div>
    
            <div id="moveWindow_ex" class="tooltip"> <!-- moveWindow() 각주 -->
                생성된 창의 좌표를 이동<a href="#modifiedWindow">(사용 예시)</a>
            </div>
    
            <div id="resizeWindow_ex" class="tooltip"> <!-- moveWindow() 각주 -->
                생성된 창 크기 조절<a href="#modifiedWindow">(사용 예시)</a>
            </div>
    
            <div id="waitKey_ex" class="tooltip"> <!-- waitKey() 각주 -->
                키 입력 대기<a href="#windowclosed">(사용 예시)</a>
            </div>
    
            <div id="format_ex" class="tooltip"> <!-- format() 각주 -->
                특정 문자열 생성<a href="#readimg">(사용 예시)</a>
            </div>
    
            <div id="matfunc_ex" class="tooltip"> <!-- zeros(), ones(), eye() 각주 -->
                해당 함수로 초기화 된 Mat 객체 생성
            </div>

            <div id="setTo_ex" class="tooltip"> <!-- setTo(), = 각주 -->
                해당 Mat 객체 원하는 값으로 초기화
            </div>

            <div id="copy_ex" class="tooltip"> <!-- clone(), copyTo() 각주 -->
                깊은 복사 함수<a href="#copyimg">(사용 예시)</a>
            </div>

            <div id="()_ex" class="tooltip"> <!-- () 연산자 재정의 각주 -->
                영역 선택<a href="#areaselect">(사용 예시)</a>
            </div>

            <div id="rowcol_ex" class="tooltip"> <!-- 부분 행렬 추출 각주 -->
                행열 부분 행렬 또는 값 추출<a href="#areaselect">(사용 예시)</a>
            </div>

            <div id="typechange_ex" class="tooltip"> <!-- 부분 행렬 추출 각주 -->
                타입 또는 모양 형태 변경<a href="#typeshapechange">(사용 예시)</a>
            </div>

            <div id="mouseCallback_ex" class="tooltip"> <!-- setMouseCallBack() 각주 -->
                마우스 이벤트 처리(<a href="#mouseClickevent">사용 예시 1</a>, <a href="#mouseClickRectevent">사용 예시 2</a>)
            </div>
    
            <div id="imread_const_ex" class="tooltip"> <!-- imread() 상수 각주 -->
                <table border="1px">
                    <thead style="background-color: blanchedalmond; color:black">
                    <tr><th>사용가능 상수</th><th>설명</th></tr>
                    </thead>
                    <tbody>
                        <tr><td>IMREAD_UNCHANGED</td><td>입력파일 그대로의 컬러속성 사용</td></tr>
                        <tr><td>IMREAD_GRAYSCALE</td><td>GrayScale로 불러오기</td></tr>
                        <tr><td>IMREAD_COLOR</td><td>RGB TRUE COLOR로 불러오기</td></tr>
                        <tr><td>IMREAD_REDUCED_GRAYSCALE_2</td><td>크기 1/2로 줄인 GrayScale로 불러오기</td></tr>
                        <tr><td>IMREAD_REDUCED_COLOR_2</td><td>크기 1/2로 줄인 RGB TRUE COLOR로 불러오기</td></tr>
                        <tr><td>IMREAD_IGNORE_ORIENTATION</td><td>EXIF에 저장된 방향 정보 사용 안함</td></tr>
                    </tbody>
                </table>
            </div>
    
            <div id="namedWindow_const_ex" class="tooltip"> <!-- namedWindow() 상수 각주 -->
                <table border="1px">
                    <thead style="background-color: blanchedalmond; color:black">
                    <tr><th>사용가능 상수</th><th>설명</th></tr>
                    </thead>
                    <tbody>
                        <tr><td>WINDOW_NORMAL</td><td>영상에 맞춰 출력(창 크기 변경 가능)</td></tr>
                        <tr><td>WINDOW_AUTOSIZE</td><td>영상에 맞춰 출력(창 크기 변경 불가)</td></tr>
                        <tr><td>WINDOW_OPENGL</td><td>OpenGL 지원</td>
                    </tbody>
                </table>
            </div>
        </div>
        

        <!--<script src="opencvcord.js"></script>-->
        <script>
            var tooltipTriggers = document.querySelectorAll('.tooltip-trigger');
            var tooltips = document.querySelectorAll('.tooltip');
            var tooltipTimer;

            function hideTooltip(tooltip) {
                tooltip.style.display = 'none';
            }

            function adjustTooltipPosition(tooltip, triggerRect) {
                var tooltipRect = tooltip.getBoundingClientRect();

                // 화면의 끝과 비교하여 툴팁의 위치를 조절
                if (tooltipRect.right > window.innerWidth) {
                    // 오른쪽으로 넘어가면 왼쪽에 출력
                    tooltip.style.left = (triggerRect.left - tooltipRect.width + window.scrollX - 10) + 'px';
                }

                
            }

            tooltipTriggers.forEach(function (trigger) {
                trigger.addEventListener('mouseover', function () {
                    var tooltipId = this.getAttribute('data-tooltip-id');
                    var tooltip = document.getElementById(tooltipId);

                    // 트리거 요소의 오른쪽에 툴팁을 배치
                    var triggerRect = this.getBoundingClientRect();
                    var left = triggerRect.right + window.scrollX + 'px';
                    var top = triggerRect.top + window.scrollY + 'px';

                    tooltip.style.left = left;
                    tooltip.style.top = top;

                    tooltip.style.display = 'block';

                    tooltip.addEventListener('mouseenter', function () {
                        clearTimeout(tooltipTimer);
                    });

                    tooltip.addEventListener('mouseleave', function () {
                        hideTooltip(tooltip);
                    });

                    adjustTooltipPosition(tooltip,triggerRect);
                });

                trigger.addEventListener('mouseleave', function () {
                    var tooltipId = this.getAttribute('data-tooltip-id');
                    var tooltip = document.getElementById(tooltipId);

                    tooltipTimer = setTimeout(function () {
                        hideTooltip(tooltip);
                    }, 100);
                });
            });

            //원그리기 함수
            function drawCircle(context, x, y, radius, color) {
                context.beginPath();
                context.arc(x, y, radius, 0, Math.PI * 2);
                context.fillStyle = color;
                context.fill();
                context.closePath();
            }

            // &|Rextoperator 그림 설명
            const andoroperatorcanvas = document.getElementById('&|Rextoperator');
            const andoroperatorctx = andoroperatorcanvas.getContext('2d');

            // rc5
            andoroperatorctx.fillStyle = 'rgba(0, 255, 0, 0.5)';
            andoroperatorctx.fillRect(5, 5, 145, 145);

            // rc3
            andoroperatorctx.fillStyle = 'rgba(0, 0, 255, 0.5)';
            andoroperatorctx.fillRect(5, 5, 100, 100);

            // rc4
            andoroperatorctx.fillStyle = 'rgba(255, 0, 0, 0.5)';
            andoroperatorctx.fillRect(50, 50, 100, 100);

            // rc6
            andoroperatorctx.fillStyle = 'rgba(255, 0, 255, 0.5)';
            andoroperatorctx.fillRect(50, 50, 55, 55);


            // rotatedRect_ex 그림 설명
            const rotatedRectcanvas = document.getElementById('rotatedRect_ex');
            const rotatedRectcanvasctx = rotatedRectcanvas.getContext('2d');

            //br
            rotatedRectcanvasctx.fillStyle = 'rgba(255, 0, 255, 0.5)';
            rotatedRectcanvasctx.fillRect(30, 39, 111, 94);

            // rrc1
            rotatedRectcanvasctx.rotate((30 * Math.PI) / 180);
            rotatedRectcanvasctx.fillStyle = 'rgba(255, 255, 0, 0.5)';
            rotatedRectcanvasctx.fillRect(67, 6, 100, 50);
            rotatedRectcanvasctx.rotate((330 * Math.PI) / 180);

            //pts
            drawCircle(rotatedRectcanvasctx, 30, 81, 2, 'rgb(0, 150, 250)');
            drawCircle(rotatedRectcanvasctx, 55, 39, 2, 'rgb(0, 150, 250)');
            drawCircle(rotatedRectcanvasctx, 141, 90, 2, 'rgb(0, 150, 250)');
            drawCircle(rotatedRectcanvasctx, 116, 133, 2, 'rgb(0, 150, 250)');

            // 원 설명 추가
            rotatedRectcanvasctx.fillStyle = 'white'; // 글자 색상 설정
            rotatedRectcanvasctx.font = '10px Arial'; // 글자 크기 및 글꼴 설정
            rotatedRectcanvasctx.fillText('pts[0]', 30, 81); // 첫 번째 원 설명
            rotatedRectcanvasctx.fillText('pts[1]', 55, 39); // 두 번째 원 설명
            rotatedRectcanvasctx.fillText('pts[2]', 141, 90); // 세 번째 원 설명
            rotatedRectcanvasctx.fillText('pts[3]', 116, 133); // 네 번째 원 설명


        </script>

    </body>
</html>
