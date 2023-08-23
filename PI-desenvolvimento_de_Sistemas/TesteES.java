import java.util.Scanner;

public class TesteES {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Digite o nome do aluno: ");
        String nome = sc.nextLine();
        System.out.println("Digite a nota do aluno: ");
        double nota = sc.nextDouble();
        System.out.println("Digite a frequencia do aluno: ");
        int frequencia = sc.nextInt();
        Aluno aluno = new Aluno(nome, nota, frequencia);
        System.out.println("Nome: " + aluno.getNome());
        System.out.println("Nota: " + aluno.getNota());
        System.out.println("Frequencia: " + aluno.getFrequencia());
        System.out.println("Resultado: " + aluno.getResultado());
    }
}