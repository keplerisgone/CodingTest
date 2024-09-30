
디버깅을 하기 위해 필요한 것
- VSCode C/C++ extension
- GCC 컴파일러 (이미 있음)
- Code runner settings

# Code Runer Settings

https://omnivore.app/keplerisgone/vs-code-c-ide-mac-c-1903af0a3f4

- 이건 처음봐서 적는다
- **Run In Terminal** 옵션은 켠다
- 각 언어별로 실행 명령어를 설정 가능 (*setting.json*)

![|650](https://i.imgur.com/iovhyOR.png)
- C++ 버전 설정
	- `"cpp": "cd $dir && g++ -std=c++17 $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt"`
- 프로젝트 단위 컴파일
	- `"cpp": "cd $dir && g++ -std=c++17 *.cpp -o $fileNameWithoutExt && $dir$fileNameWithoutExt",`
	
# Snippets 만들기

VSCode에서 C++ snippets를 사용하는 방법을 안내해드리겠습니다. Snippets는 코드 작성 속도를 높이고 반복적인 코딩 작업을 줄여주는 유용한 도구입니다. VSCode에서 C++ snippets를 사용하려면 다음 단계를 따르세요:

### 1. Snippets 설치
1. **Visual Studio Code 실행**:
   먼저, Visual Studio Code를 실행합니다.

2. **C++ 확장 설치**:
   VSCode 마켓플레이스에서 `C++` 확장을 설치합니다. 이 확장은 Intellisense, 디버깅 등 다양한 기능을 제공합니다.
   - VSCode에서 `Ctrl + P`를 누르고, `ext install ms-vscode.cpptools`를 입력한 후 설치합니다.

### 2. Snippets 파일 생성
1. **사용자 snippets 파일 열기**:
   - `파일 > 기본 설정 > 사용자 코드 조각` 메뉴로 이동합니다.
   - 언어 선택에서 `C++`을 선택합니다.

2. **새 snippets 추가**:
   - JSON 형식의 snippets 파일이 열리면 여기에 새로운 snippets를 추가할 수 있습니다.
   - 예를 들어, `for loop` snippets를 추가하고 싶다면 다음과 같이 입력합니다:
     ```json
     {
       "For Loop": {
         "prefix": "for",
         "body": [
           "for (int ${1:i} = 0; ${1:i} < ${2:N}; ${1:i}++) {",
           "\t$0",
           "}"
         ],
         "description": "For Loop"
       }
     }
     ```
   - 여기서 `prefix`는 snippets를 호출할 때 사용하는 단어입니다. `body`는 snippets의 내용이며, `${1:i}`, `${2:N}`은 편집 가능한 자리 표시자입니다.

### 3. Snippets 사용
1. **Snippets 호출**:
   - C++ 파일에서 코드를 작성할 때, `prefix`로 설정한 단어를 입력하고 `Tab` 키를 누르면 snippets가 자동으로 완성됩니다.
   - 예를 들어, `for`를 입력하고 `Tab` 키를 누르면 위에서 설정한 `For Loop` snippets가 나타납니다.

2. **자리 표시자 편집**:
   - Snippets가 삽입된 후, `Tab` 키를 눌러 자리 표시자 사이를 이동하며 편집할 수 있습니다.

### 4. Snippets 편집 및 삭제
1. **사용자 snippets 파일 편집**:
   - snippets를 추가하거나 수정하려면 다시 `파일 > 기본 설정 > 사용자 코드 조각` 메뉴로 이동하여 C++ snippets 파일을 엽니다.
   - 여기서 기존 snippets를 수정하거나 새 snippets를 추가할 수 있습니다.

2. **Snippets 삭제**:
   - snippets 파일에서 해당 snippets를 삭제하면 됩니다.

### 예시
아래는 몇 가지 유용한 C++ snippets의 예시입니다:

- **main 함수 snippets**:
  ```json
  {
    "Main Function": {
      "prefix": "main",
      "body": [
        "#include <iostream>",
        "int main() {",
        "\tstd::cout << \"Hello, World!\" << std::endl;",
        "\treturn 0;",
        "}"
      ],
      "description": "Main Function"
    }
  }
  ```

- **클래스 정의 snippets**:
  ```json
  {
    "Class Definition": {
      "prefix": "class",
      "body": [
        "class ${1:ClassName} {",
        "public:",
        "\t${1:ClassName}();",
        "\t~${1:ClassName}();",
        "private:",
        "\t$0",
        "};"
      ],
      "description": "Class Definition"
    }
  }
  ```

이와 같이 snippets를 설정하면 VSCode에서 C++ 코딩을 더 효율적으로 할 수 있습니다. 추가적으로 더 많은 snippets를 원한다면 GitHub에서 다른 개발자들이 공유한 snippets를 찾아 설치할 수도 있습니다.

압도적 감사 GPT

